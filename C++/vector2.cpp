#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'a','b','c','d','e','f'};
    cout <<"Size of vector is " << vec.size() << endl; 

    for(char val : vec){
        cout << val << endl;
    }
    return 0;
}
