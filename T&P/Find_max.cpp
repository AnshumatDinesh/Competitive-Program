#include <iostream>
using namespace std;
/*
Find order of 3 numbers
i.e. small,mid,large
*/
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int sm,mid,lg;
    if(num1>num2){
        if(num1>num3){
            if(num3>num2){
                lg=num1;
                mid=num3;
                sm=num2;
            }
            else{
                lg=num1;
                mid=num2;
                sm=num3;                
            }
        }
        else{
            lg=num3;
            mid=num1;
            sm=num2;
        }
    }
    else{
        if(num2>num3){
            if(num3>num1){
                lg=num2;
                mid=num3;
                sm=num1;
            }
            else{
                lg=num2;
                mid=num1;
                sm=num3;                
            }
            
        }
        else{
            lg=num3;
            mid=num2;
            sm=num1;
        }
    }
    cout<<sm<<mid<<lg;
}