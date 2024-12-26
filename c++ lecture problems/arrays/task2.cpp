#include <iostream>
#include <string>
using namespace std;
// factorial form of the number
void fact(int n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    cout << "FACTORIAL FORM OF A " << n << " is " << product << endl;;
}
// linear search algorithm
int searchTarget(int arr[], int size, int target)
{
    int found = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            fact(arr[i]);
            found = i;
            return (found);
        }
    }
    cout << "Not found" << endl;
    return (found);
}
int main()
{
    int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6};
    int target;
    cout << "Enter any number which you want to find" << endl;
    cin >> target;
    cout << searchTarget(arr, size, target);
    return 0;
}