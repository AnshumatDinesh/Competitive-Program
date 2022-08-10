#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long b[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            sum+=b[i];
        }
        long long a_sum=sum/(n+1);
        for(int i=0;i<n;i++){
            cout<<b[i]-a_sum<<" ";
        }
        cout<<endl;
    }
}