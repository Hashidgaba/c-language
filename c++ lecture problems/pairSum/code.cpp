#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{
    vector<int> finalAns;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == target)
            {
                finalAns.push_back(i);
                finalAns.push_back(j);
                return finalAns;
            }
        }
    }
   return finalAns;
}
int main()
{
    vector<int> vec = {3,2,4};
    int target = 6;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}