#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase>0){
    	int temp;
    	cin>>temp;
    	if(temp>20){
    	    cout<<"HOT\n";
    	}
    	else{
    	    cout<<"COLD\n";
    	}
    	testcase--;
	}
	return 0;
}
