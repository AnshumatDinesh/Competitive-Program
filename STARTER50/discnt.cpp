#include <iostream>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
    float x;
    cin>>x;
    cout<<(100-(100*(x*0.01)))<<endl;
   }
   return 0;
}