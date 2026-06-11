#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    cout<<"the size of vector is "<< vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"After the update the size of vector is "<< vec.size()<<endl;
    vec.pop_back();
    
    cout<<vec.front()<<endl;
    //cout<<vec.back()<<endl;
    return 0;
}