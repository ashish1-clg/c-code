#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v ;
    int n;
    cout<<"Enter size of vector or array = ";
    cin>>n; 
    
    for(int i=0 ; i<n; i++){
    int x;
    cin>> x;
    v.push_back(x);
    }
    cout<<endl;
    sort(v.begin(), v.end());
   // short(v.begin(), v.end());
    for(int i=0 ; i<n ; i++){
        cout<<v[i] <<" ";
    }
    return 0  ;
}