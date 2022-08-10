#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p1,p2,k;
        cin>>p1>>p2>>k;
        int x;
        x=(p1+p2)/k;
        if(x%2==0){
            cout<<"CHEF\n";
        }
        else{
            cout<<"COOK\n";
        }
    }
}