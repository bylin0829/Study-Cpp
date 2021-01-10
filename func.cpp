#include <iostream>
#include "func.h"

using namespace std;

void func(){
    cout << pow2(5);
}

void default_func(int x=0, int y=20){
    cout << x << " " << y << endl;
}

void overload(int x){
    cout << "int:" << x << endl;
}
void overload(double x){
    cout << "double:" << x << endl;
}

void extern_test(){
    extern double i;
    cout << i << endl;
}
int main(){
    // func();
    // default_func(9,5);
    // overload(5.0);
    extern_test();
}