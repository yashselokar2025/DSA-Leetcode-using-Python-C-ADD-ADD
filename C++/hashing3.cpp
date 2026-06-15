//Find the First Repeating Element

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int firstRepeating(vector<int>& arr) {
    unordered_map<int, int> freq;

    for(int num : arr) {
        freq[num]++;
    }

    for(int num : arr) {
        if(freq[num] > 1) {
            return num;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};

    cout << "First Repeating Element: "
         << firstRepeating(arr);

    return 0;
}