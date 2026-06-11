#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    cout<<"the size of vector is "<< vec.size() << endl;
    vec.push_back(25);
    cout<<"After the update the size of vector is "<< vec.size()<<endl;

    for(int val :vec) {
        cout << val <<endl;
    }
    return 0;
}