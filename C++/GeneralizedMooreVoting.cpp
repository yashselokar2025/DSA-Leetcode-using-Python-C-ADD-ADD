//Find all elements appearing more than n/k times.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums, int k) {
    unordered_map<int, int> mp;

    for (int num : nums) {
        if (mp.count(num))
            mp[num]++;
        else if (mp.size() < k - 1)
            mp[num] = 1;
        else {
            vector<int> removeKeys;

            for (auto &it : mp) {
                it.second--;

                if (it.second == 0)
                    removeKeys.push_back(it.first);
            }

            for (int key : removeKeys)
                mp.erase(key);
        }
    }

    unordered_map<int, int> freq;

    for (int num : nums)
        if (mp.count(num))
            freq[num]++;

    vector<int> ans;

    for (auto it : freq)
        if (it.second > nums.size() / k)
            ans.push_back(it.first);

    return ans;
}

int main() {
    vector<int> nums = {1,2,3,2,2,1,1,1};
    int k = 4;

    vector<int> ans = majorityElement(nums, k);

    for (int x : ans)
        cout << x << " ";
    return 0;
}