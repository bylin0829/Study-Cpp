#include <iostream>

using namespace std;

// [PowerShell] g++ .\practice_pointer.cpp -o practice_pointer | ./practice_pointer

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

void bi_ptr(){
    // Bi-pointer
    int n = 10;
    int *n_ptr = &n;
    int **n_ptr_ptr = &n_ptr;

    cout << "[Bi-pointer]" << endl << "Address(n_ptr):" << n_ptr << endl << "Address(n_ptr_ptr):" << n_ptr_ptr << endl << endl;

    // pointer with array
    constexpr int LENGTH = 10;
    long double arr[LENGTH] = {20.1111111,30,30,30,30,90,71,513,10.1211111,1199.19456};
    int len = *(&arr+1) - arr;
    cout << "[Pointer LENGTH]" << endl 
        << "LENGTH:" << len << endl
        << "*(&arr+1):" << *(&arr+1) << endl
        << "arr:" << arr << endl << endl;

    // Matrix
    int matrix[2][3]={{5,3,1},{2,4,6}};
    // int (*p)[3] = matrix;
    auto p = matrix;
    cout << "[Matrix]" << endl;
    for(int i =0;i<6;i++){
        cout << *((*p)+i) << endl;
    }

}

void ptr_string(){
    const char *t = "Hello world!";
    cout << "[Add const before char*]" << endl << t << endl;

    const char *names[] = {"Danny", "Bob", "Rober"};
    cout << "[Pointer for array of string]" << endl;
    for (auto n: names) {
        cout << n << endl;
    }
}

int main(){
    // ptr_declare();
    // ptr_calculation();
    // bi_ptr();
    ptr_string();
    return 0;
}