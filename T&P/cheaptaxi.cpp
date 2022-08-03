#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase>0){
    	int x,y;
    	cin>>x>>y;
    	if(x>y){
    	    cout<<"SECOND\n";
    	}
    	else if(x<y){
    	    cout<<"FIRST\n";
    	}
    	else{
    	    cout<<"ANY\n";
    	}
    	testcase--;
	}
	return 0;
}
