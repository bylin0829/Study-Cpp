#include <iostream>

using namespace std;

//[PowerShell] g++ .\memory.cpp -o memory | ./memory

void pointer(){
    //new and delete
    int *p = new int;
    int *q = new int(100);
    cout << "[Pointer]" << endl;
    cout << "Addr:" << q << endl << "Value:" << *q << endl; //Unpredictable

    *q = 200;
    cout << "Addr:" << q << endl << "Value:" << *q << endl;

    delete q;

    cout << "Addr:" << q << endl << "Value:" << *q << endl; //Unpredictable
}

void pointer_arr(){
    int size =0;
    cout << "Please input array of pointer size:";
    cin >> size;
    int *arr = new int[size]{0};

    for(int i = 0; i <size;i++){
        cout << "array[" << i << "]=";
        cin >> arr[i];
    }
    
    cout << "Result" << endl;

    for(int i = 0; i <size;i++){
        cout << "array[" << i << "]=" << *(arr+i) << endl;
    }

    delete [] arr;

}

int main(){
    // pointer();
    pointer_arr();

}