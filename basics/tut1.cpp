#include<bits/stdc++.h>
using namespace std;
void swaparr(int arr[], int n){
    for(int i =0; i<n; i=i+2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarr(int arr[], int n){
    for(int i =0; i<n;++i){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n =6;
   
   swaparr(arr,n);
   printarr(arr,n);
    return 0;
}