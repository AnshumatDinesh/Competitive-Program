#include <iostream>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
    int x,h;
    cin>>x>>h;
    if(x<h){
        cout<<"no\n";
    }
    else{
        cout<<"yes\n";
    }
   }
   return 0;
}