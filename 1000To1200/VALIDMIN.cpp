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
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        if(arr[0]==arr[1]&& arr[0]==arr[2]){
            cout<<"yes\n";
            continue;
        }
        else if(arr[0]==arr[1]&& arr[2]<arr[0]){
            cout<<"no\n";
            continue;
        }
        else if(arr[1]==arr[2]&& arr[0]<arr[2]){
            cout<<"no\n";
            continue;
        }
        else if(arr[0]==arr[2]&& arr[1]<arr[0]){
            cout<<"no\n";
            continue;
        }
        else if(arr[0]!=arr[1]&& arr[0]!=arr[2]&& arr[1]!=arr[2]){
            cout<<"no\n";
            continue;
        }
        else{
            cout<<"yes\n";
            continue;
        }
    }
	return 0;
}
