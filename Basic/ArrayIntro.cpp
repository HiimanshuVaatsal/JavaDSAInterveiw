#include<iostream>
using namespace std;
// function

void printArray(char arr[],int size){
    cout <<"print Array:" <<endl;
    for(int i=0;i<size;i++){
        cout <<"each element:" << arr[i] <<endl;
    }
}
int main(){
    //declare
    // int number[15]={5,7,11};
    // int n=15;
    // for(int i=0;i<n;i++){
    //     cout << "value of particuler index:"<< number[i] <<endl;
    // }
    // cout << "value at index 2 :" <<  number[2] <<endl ;

    // cout << "Value at index 5:" << number[0] <<endl;

    // int fourth[12]={0};
    // int x=12;

    // for(int i=0;i<x;i++){
    //     cout <<"value of each index:" << fourth[i] << endl;
    // }

    int five[12]={1,2,3,4,5,7,5};
    // int x=12;
    // printArray(five,x);

    // int arr[122]={0};
    // printArray(arr,122);

    //find the size of five array

    // int fiveSize=sizeof(five)/sizeof(int);
    // cout << endl <<fiveSize <<endl;


    //character array

    char ch[5]={'a','b','c','d','e'};

    printArray(ch,5);
    return 0;
}