#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            int x=(20*a[i])-(10*b[i]);
            if(x>0){
                c[i]=x;
            }
            else{
                c[i]=0;
            }
        }
        int max=c[0];
        for(int i=0;i<n;i++){
            if(c[i]>max){
                max=c[i];
            }
        }
        cout<<max<<endl;
    }
}