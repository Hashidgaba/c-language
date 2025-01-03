#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//optimize method to find pair sum from sorted array
vector <int> pairSum(vector <int> vec, int target){
    vector <int> finalAns;
    int i = 0, j = vec.size() - 1;
    while(i < j){
        int sum = vec[i] + vec[j];
        if(sum > target){
            j--;
        }else if (sum < target){
            i++;
        }else{
            finalAns.push_back(i);
            finalAns.push_back(j);
            
            return finalAns;
        }
    }
    return finalAns;
}
int main(){
    vector <int> vec = {1,2,3,4};
    int target = 6;
    vector <int> ans = pairSum(vec , target);
    cout << ans[0] << " , " << ans[1];
    return 0;
}