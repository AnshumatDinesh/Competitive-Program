#include <iostream>
#include <limits>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long z;
        cin>>z;
        long long op[z];
        int n=0;
        while(pow(2,n)<=z){
            op[(long long)pow(2,n)-1]=0;
            n++;
        }
        for(int i=2;i<z;i++){
            if(op[i]==0){
                
                continue;
            }
            int n=0;
            while(pow(2,n)<=i+1){
                
                n++;
            }
            op[i]=1+op[i-(long long)pow(2,n-1)];
        }
        // cout<<op[18]<<"|\n";
        // cout<<op[2]<<" ";
        cout<<op[z-1]<<" ";
        cout<<endl;
        
    }
	return 0;
}
