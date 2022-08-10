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
        vector <int> uniq;
        for (int i = 0; i < n; i++) {
            uniq.push_back(arr[i]);
            while (i < n - 1 && arr[i] == arr[i + 1]){
                i++;
            }
            count++;
        }
        int mode_f=0;
        int found=0;
        for (int i = 0; i < uniq.size(); i++) {
            int freq=0;
            for(int j=0;j<n;j++){
                if(uniq[i]==arr[j]){
                    freq++;
                }
            }
            if(freq>mode_f){
                found=1;
                mode_f=freq;
            }
            else if(freq==mode_f){
                found=0;
            }
        }
        if(found){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
	return 0;
}
