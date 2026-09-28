//max  and second max value out of all element of array 
#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[8]={1,5,7,89,6,5,4,8};
	int max = arr[0];
	for(int i=0; i<=7 ; i++){
	     if(max<arr[i]) max=arr[i];
	}
		cout << max << endl ;
	int smax= INT_MIN ;
	for(int i=0; i<8; i++){
	    if( smax<arr[i] &&  max!=arr[i] ) 
	    smax= arr[i];
	}
	cout<<smax;
}
