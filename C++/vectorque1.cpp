//Find all pairs whose sum equals a target.
#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec = {2,7,11,15,3,6};
    int target = 9;

    for(int i = 0; i < vec.size(); i++) {

        for(int j = i+1; j < vec.size(); j++) {

            if(vec[i] + vec[j] == target) {
                cout << "(" << vec[i]
                     << "," << vec[j] << ")" << endl;
            }
        }
    }

    return 0;
}