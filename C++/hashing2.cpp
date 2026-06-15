//Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());

    int longest = 0;

    for(int num : s) {
        if(s.find(num - 1) == s.end()) {
            int current = num;
            int streak = 1;

            while(s.find(current + 1) != s.end()) {
                current++;
                streak++;
            }

            longest = max(longest, streak);
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {100,4,200,1,3,2};

    cout << longestConsecutive(nums);

    return 0;
}