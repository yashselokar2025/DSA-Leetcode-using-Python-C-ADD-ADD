//Given an array of integers, print all the leaders.
//A leader is an element that is greater than or equal to all the elements to its right.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {16,17,4,3,5,2};

    vector<int> ans;

    int leader = arr[arr.size()-1];
    ans.push_back(leader);

    for(int i=arr.size()-2;i>=0;i--){

        if(arr[i] >= leader){
            leader = arr[i];
            ans.push_back(arr[i]);
        }

    }
    reverse(ans.begin(), ans.end());

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}