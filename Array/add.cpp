#include<iostream>
#include<vector> 
using namespace std ;
void change(vector<int> &a ){
    a[0]= 90;
   
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(0);
    for(int i=0 ; i<v.size() ; i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
    change(v);
    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}