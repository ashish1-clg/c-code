// search last occurance of an int in array 
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v;
	 v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(0);
    v.push_back(4);
    v.push_back(7);
    v.push_back(1);
    
    int x = 1 ;
    int idx = -1 ;
    for(int i= v.size()-1 ; i>=0 ; i--){
        idx = i ;
        break ;
    }
    cout<<idx ;

}