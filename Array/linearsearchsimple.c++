#include <iostream>
using namespace std ;

int main() {
    // Write C++ code here
    int n; 
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n]; 
    for(int i=0 ; i<= n ;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter no you want to search ";
    cin>>x; 
    // check mark
    bool flag= false  ;
    for(int i=0 ; i<=n; i++){
        if (x==arr[i]) flag= true ;    
        }
    if( flag==true) cout<<"element found ";
    else cout<<"element not found";
    }
