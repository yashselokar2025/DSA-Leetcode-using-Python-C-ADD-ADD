//Return the majority element only if it exists.
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0)
            candidate = num;

        if (candidate == num)
            count++;
        else
            count--;
    }
    count = 0;
    for (int num : nums)
        if (num == candidate)
            count++;

    if (count > nums.size() / 2)
        return candidate;

    return -1;
}
int main() {
    vector<int> nums = {1,2,3,2,2};

    cout << majorityElement(nums);
    return 0;
}