#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout<<"enter 1st no : ";
    cin>>a;
    
    cout<<"enter 2nd no : ";
    cin>>b;
    
    cout<<"enter 3rd no : ";
    cin>>c;
    if (a>b and a>c){
        cout<<a<<" is greatest";
    }
    else if(b>a and b>c){
        cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }