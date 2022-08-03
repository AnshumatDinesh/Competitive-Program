#include <iostream>
using namespace std;
// int swap(int *x,int *y){
//     int temp =*x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int bublesort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr+j,arr+j+1);
//             }
//         }
//     }
// }
int main() 
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int arr2[n];
    int f=1;
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(f==1){
            arr2[n-1-j]=arr[n-1-i];
            f=0;
            j++;
        }
        else if(f==0){
            arr2[k]=arr[n-1-i];
            f=1;
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
   }

   return 0;
}