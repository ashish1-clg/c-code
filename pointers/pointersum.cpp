#include<iostream>
using namespace std;

int main(){
     int x, y ;
    int*p1 =&x; 
    int*p2= &y ;
    cin>>*p1;
    cin>>*p2 ;
    cout<<*p1+*p2;   
}