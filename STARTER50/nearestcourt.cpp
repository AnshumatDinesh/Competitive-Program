#include <iostream>
using namespace std;
int abs(int x){
    if(x<0){
        return -1*x;
    }
    return x;
}
int max(int x,int y){
    if(x>y){
        return x;
    }
    return y;
}
int main() 
{
   int t;
   cin>>t;
   while(t--){
    int x,y;
    cin>>x>>y;
    int pos= (x+y)/2;
    cout<<max(abs(pos-x),abs(pos-y))<<endl;
   }
   return 0;
}