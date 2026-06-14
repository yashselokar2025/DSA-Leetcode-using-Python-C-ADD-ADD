//Only negative elements
#include<iostream>
using namespace std;

int main() {
    int a[] = {-8, -3, -6, -2, -5, -4};
    int n = sizeof(a) / sizeof(a[0]);

    int currSum = a[0];
    int maxSum = a[0];

    for(int i = 1; i < n; i++) {
        currSum = max(a[i], currSum + a[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum Subarray Sum is : " << maxSum;

    return 0;
}