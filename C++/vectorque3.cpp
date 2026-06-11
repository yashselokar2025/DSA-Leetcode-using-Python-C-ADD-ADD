//Move All Zeros to End (Medium)
#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec = {0,1,0,3,12};

    int index = 0;

    for(int i = 0; i < vec.size(); i++) {

        if(vec[i] != 0) {
            vec[index] = vec[i];
            index++;
        }
    }

    while(index < vec.size()) {
        vec[index] = 0;
        index++;
    }

    for(int val : vec) {
        cout << val << " ";
    }

    return 0;
}