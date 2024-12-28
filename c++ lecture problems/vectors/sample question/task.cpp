#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3};
    //size function
    cout << "size  before push back = " << vec.size() << endl;
    //add elements in last index
    vec.push_back(5);
    cout << "size after push back = " << vec.size() << endl;
    // cout << vec[2] << endl;
    //remove elements from last index
    vec.pop_back();
    cout << "size after pop back = " << vec.size() << endl;

    //we use forEach loop in order to print all values in vector
    for (int val : vec ){
        cout << val << " ";
    }
    cout << "first value in the vector is " << vec.front() << endl;
    cout << "last value in the vector is " << vec.back() << endl;
    cout << vec.at(2);
    return 0;

}