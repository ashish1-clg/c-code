#include<iostream>
using namespace std; 
int maxtherr(int a , int b , int c ){
    if (a>b & a>c )
    return a;
    else if (b>a & b>c)
    return b ;
    else return c;
}
int main(){
    int a=15 , b= 45 , c= 9;
    cout<<maxtherr(a,b,c);
}