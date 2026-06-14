#include<iostream>
using namespace std;

int main() {
    int a[] = {2, 4, 6, 8, 10};
    int n = sizeof(a[0]);

    int currSum = a[0];
    int maxSum = a[0];

    for(int i = 1; i < n; i++) {
        currSum = max(a[i], currSum + a[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum Subarray Sum is : " << maxSum;

    return 0;
}