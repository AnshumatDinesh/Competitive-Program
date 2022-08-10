#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string feed;
        cin>>feed;
        if(feed.find("010")!=string::npos){
            cout<<"GOOD\n";
        }
        else if(feed.find("101")!=string::npos){
            cout<<"GOOD\n";
        }
        else{
            cout<<"BAD\n";
        }
    }
}