#include <iostream>

using namespace std;

// g++ .\practice_pointer.cpp -o practice_pointer
// .\practice_pointer.exe

void ptr_declare(){
// Declare pointer
    int a=60;
    int *ptr_a = &a;

    cout << "[Declare pointer]" << endl << "Address:" << ptr_a << endl  << "Value:" << *ptr_a << endl;

    // Declare nullptr
    int *ptr_b = nullptr;
    int b = 50;
    ptr_b = &b;
    cout << "[Declare nullptr]" << endl << "Address:" << ptr_b << endl  << "Value:" << *ptr_b << endl;

    //Declare void type of pointer and use reinterpret_cast to set pointer type
    void *ptr_c = nullptr;
    float c = 3.112;
    ptr_c = &c;
    float *ptr_c2 = reinterpret_cast<float*>(ptr_c);
    cout << "[Declare void type of pointer]" << endl << "Address:" << ptr_c2 << endl  << "Value:" << *ptr_c2 << endl;

    //Declare const pointer
    const float d = 199.01;
    const float *ptr_d = &d;
    cout << "[Declare const pointer]" << endl << "Address:" << ptr_d << endl  << "Value:" << *ptr_d << endl;

    //Declare invariable pointer for variable value
    int n = 20;
    int m = 30;
    int* const ptr_n = &n;
    // ptr_n = &m; //Error: assignment of read-only variable 'm'

    const int t = 50;
    const int u = 50;
    const int* const pttr_t = &t;
    //pttr_t = &u; //Error: assignment of read-only variable 'u'
}

void ptr_calculation(){
    constexpr int LENGTH = 5;
    int arr[LENGTH]={10,30,20,50,90};
    cout << "[Get array length]" << endl << "end:" << *end(arr) << endl << "begin:" << *begin(arr) << endl << "Array length:" << end(arr) - begin(arr) << endl;

    cout << "[Get array length2]" << endl << arr << arr+1 << endl << (&arr) << (&arr)+1 << endl << *(&arr+1)-arr;


}

int main(){
    // ptr_declare();
    ptr_calculation();
    
    return 0;
}