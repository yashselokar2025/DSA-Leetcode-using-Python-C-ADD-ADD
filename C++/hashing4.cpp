//Given an array, count the frequency of every element using hashing

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1,2,2,3,1,4,2};

    unordered_map<int, int> freq;

    for(int num : arr) {
        freq[num]++;
    }

    for(auto pair : freq) {
        cout << pair.first
             << " -> "
             << pair.second << endl;
    }

    return 0;
}