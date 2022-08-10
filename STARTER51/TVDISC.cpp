#include <iostream>
#include <limits>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int p1,p2;
        p1=a-(c);
        p2=b-(d);
        if(p1<p2){
            cout<<"First\n";
        }
        else if(p1>p2){
            cout<<"Second\n";
        }
        else{
            cout<<"Any\n";
        }
    }
	return 0;
}
