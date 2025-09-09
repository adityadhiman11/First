#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"3 digit no";
    }
    else{
        cout<<"it is not 3 digit no";
    }
}