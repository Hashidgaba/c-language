#include <iostream>
#include <vector>
using namespace std;
//print unique number in the array
int singleNumbers(vector<int> vec)
{
    int ans = 0;
    for (int val : vec)
    {
        ans ^= val;
    }

    return ans;
}

int main()
{
    vector<int> vec = {1, 4, 2, 2, 1};
    cout << "size = " << vec.size() << endl;
    cout << singleNumbers(vec);
    return 0;
}