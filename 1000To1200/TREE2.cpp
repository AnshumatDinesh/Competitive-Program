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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        if(arr[0]==0){
            count=-1;
        }
        for (int i = 0; i < n; i++) {
            while (i < n - 1 && arr[i] == arr[i + 1]){
                i++;
            }
            count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
