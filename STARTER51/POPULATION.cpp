#include <iostream>
#include <limits>
#include<algorithm>
#include<vector>
using namespace std;
int check(vector<int> arr,int n){
    int a=arr[0];
    for(int i=0;i<n;i++){
        if(a!=arr[i]){
            return 0;
        }
    }
    return 1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<x-y+z<<endl;
    }
	return 0;
}
