#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.clear();

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    cout << "is empty : " << vec.empty() << endl;

    return 0;
}
