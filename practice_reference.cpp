#include <iostream>

using namespace std;

void swapbyref(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;

    cout << x << endl << y << endl;
}

int main(){
    int x = 10;
    int y = 20;
    int &ref_x = x;
    int &ref_y = y;
    cout << ref_x << endl << ref_y << endl;
    swapbyref(x, y);
    return 0;
}