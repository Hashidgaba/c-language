#include <iostream>
#include <math.h>
using namespace std;
void udf(int n){
    for(int i = 1; i <= 10; i ++){
        cout << n << " * "<< i << " = " << n * i << endl;
    }
}
void udf(float a, float b, float c){
    cout << pow(a, 2) + pow(b, 2) + pow(c, 2) << endl;;
}

float udf(int a, int b, int c, int d){
    float avg = a + b + c + d;
    avg /= 4;
    return avg;
    
}
// Function template for calculating sum
template <typename T>
T calculateSum(T a, T b, T c) {
    return a + b + c;
}

// Function template for calculating average
template <typename T>
T calculateAverage(T a, T b, T c) {
    return (a + b + c) / 3;
}
int main(){
    int n = 5;
    float num1 = 3.21;
    float num2 = 4.21;
    float num3 = 5.21;
    udf(n);
    udf(num1, num2, num3);
    cout << udf(5,4,3,2);

       // First execution with integers for function templates
    int int1 = 10, int2 = 20, int3 = 30;
    cout << "\nUsing integers for function template:" << endl;
    cout << "Sum: " << calculateSum(int1, int2, int3) << endl;
    cout << "Average: " << calculateAverage(int1, int2, int3) << endl;

    // Second execution with floats for function templates
    float float1 = 10.5, float2 = 20.5, float3 = 30.5;
    cout << "\nUsing floats for function template:" << endl;
    cout << "Sum: " << calculateSum(float1, float2, float3) << endl;
    cout << "Average: " << calculateAverage(float1, float2, float3) << endl;

    return 0;
}