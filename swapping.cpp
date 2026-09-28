//1st code
#include<iostream>
using namespace std;
int main( ){
    int a, b ,c; //using third variable 
    cin>>a; 
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
}
//without using third variable
int a,b ;
cin>>a;
cin>>b; 
a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b; 