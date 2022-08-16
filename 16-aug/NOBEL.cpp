#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
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
        if(count<m){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
	return 0;
}
