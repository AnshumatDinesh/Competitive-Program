#include <iostream>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   while(t--){
    float n,x,y,a,b;
    cin>>n>>x>>y>>a>>b;
    float pet,des;
    pet=x*(n/a);
    des=y*(n/b);
    if(pet<des){
        cout<<"petrol\n";
    }
    else if(des<pet){
        cout<<"diesel\n";
    }
    else{
        cout<<"any\n";
    }
   }
   return 0;
}