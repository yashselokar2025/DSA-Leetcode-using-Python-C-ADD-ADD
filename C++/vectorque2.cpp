//Numbers from 1 to n are present except one. Find the missing number.
#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec = {1,2,3,5};

    int n = 5;

    int total = n*(n+1)/2;

    int sum = 0;

    for(int val : vec) {
        sum += val;
    }

    cout << "Missing Number = "
         << total - sum;

    return 0;
}