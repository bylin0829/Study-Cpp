#include <iostream>
#include <cstring>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;

void ex_string(){
    char test[]="hello world!";
    
    // Method 1
    for(int i =0; i< sizeof(test); i++){
        cout << test[i] ;
    }
    cout << endl;

    //Method 2
    for(auto ch : test){
        if(ch =='\0'){
            cout << "null" << endl;
        }
        else{
            cout << ch;
        }
    }

    //Method 3
    char ch[]=u8"測";
    cout << strlen(ch) << endl << ch << endl;
}

void ex_array(){
    array<int, 5> number={66,12,30,50,90};
    
    // Method 1
    cout << "Size of array<int, 5>:" << sizeof(number)<< endl;
    for(auto ch: number){
        cout  << ch << endl;
    }

    // Method 2
    array<int ,5> number2(number); // copy
    cout << "Method2" << endl;
    for(auto ch: number2){
        cout  << ch << endl;
    }

    // Method 3
    number[1]= 666;
    cout << "Method3" << endl;
    for(auto ch: number2){
        cout  << ch << endl;
    }

    // Method 4
    cout << "Array begin(Addr): " << number.begin() << endl
         << "Array end(Addr): " << number.end()     << endl
         << "Array begin: " << *number.begin() << endl
         << "Array end: " << *number.end()     << endl;
    
    // Sorting 1

    cout << "Sorting" << endl;
    array<int, 5> num_sort={9,20,10,3,6};
    cout << "Before :" ;
    for(auto n : num_sort){
        cout << n << ' ';
    }
    cout << endl;
    
    cout << "After  :" ;
    sort(num_sort.begin(),num_sort.end());
    for(auto n : num_sort){
        cout << n << ' ';
    }
    cout << endl;

    //Find 1
    array<int, 5> num_find={9,920,310,3,6};
    int target;
    cout << "The table is [";
    for(auto n:num_find){
        cout << n << ' ';
    }
    cout << "] Please input your target number:";
    cin >> target;
    array<int,5>::iterator result = find(num_find.begin(), num_find.end(),target);
    cout << (result != num_find.end()? "Got it":"Didn't find it.") << endl;

    //Reverse
    array<int,5> num_reverse = {9,5,1,3,2};
    cout << "Reverse" << endl;
    
    for(auto n : num_reverse){
        cout << n << ' ';
    }
    cout << endl;
    
    reverse(num_reverse.begin(), num_reverse.end());
    
    for(auto n : num_reverse){
        cout << n << ' ';
    }
    cout << endl;
}

void test_array(){
    array<float, 5>num={311.14,36,1.9,320.1,112};
    //sorting
    cout << "==Sorting==" << endl;
    array<float,5>num_sort(num);
    cout << "Before:";
    for(auto n : num){
        cout << ' ' << n;
    }
    cout << endl;

    cout << "After:";
    sort(num_sort.begin(), num_sort.end());
    for(auto n : num_sort){
        cout << ' ' << n;
    }
    cout << endl;

    //reverse
    cout << "==Reverse==" << endl;
    array<float,5>num_reverse(num);
    cout << "Before:";
    for(auto n : num){
        cout << ' ' << n;
    }
    cout << endl;

    cout << "After:";
    reverse(num_reverse.begin(), num_reverse.end());
    for(auto n : num_reverse){
        cout << ' ' << n;
    }
    cout << endl;

    //find
    cout << "==Find==" << endl;
    array<float,5>num_find(num);
    float target;
    cout << "Input a number you want:";
    cin >> target;
    array<float,5>::iterator result = find(num_find.begin(), num_find.end(),target);
    cout << (result!=num_find.end()?"find it":"didn't match");
}

void ex_vector(){
    vector<int> num={10,30,96,11};
    vector<int> num1={10,11,661,4};
    cout << "==Vector==" << endl;
    cout << "for in range" << endl;
    for(auto n:num){
        cout << ' ' << n;
    }
    cout << endl;
    num.swap(num1);
    cout << "for in index" << endl;
    for(int i=0; i< num.size(); i++){
        cout << ' ' << num[i];
    }
    cout << endl;
}

int main(){
    // ex_string();
    // ex_array();    
    // test_array();
    ex_vector();
    return 0;
}