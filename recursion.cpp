#include <iostream>

using namespace std;

int gcd(int x, int y){
    int R = x%y;

    if(R==0){
        return y;
    }
    else{
        gcd(y,R);
    }
}

int lcm(int x, int y){
    int result = gcd(x,y);
    return (x/result)*(y/result)*result;
}

// Solve the maximum stack limit.
int gcd_loop(int x, int y){
    int temp=0;
    while(y!=0){
        temp = x%y;
        x = y;
        y = temp;
    }
    return x;
}

int main(){
    cout << "GCD:"<< gcd(20,15) << endl;
    cout << "LCM:"<< lcm(20,15) << endl;
    cout << "GCD_loop:"<< gcd_loop(20,15) << endl;
    
}