#include <iostream>
#include <string>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void permute(int a[], int l, int r,int size) 
{ 
    // Base case 
    if (l == r) {
        for(int i=0;i<3;i++){
            cout<<a[i];
        }
        cout<<endl;
    }
    else
    { 
        // Permutations made 
        for (int i = l; i <= r; i++) 
        { 
            swap(a+l, a+i); 
            permute(a, l+1, r,3); 
            swap(a+l, a+i); 
        } 
    } 
} 
int main(){
    int arr[3] = {1,2,3}; 
    int n =3; 
    permute(arr, 0, n-1,3); 
}