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
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid triangle";
    }
}