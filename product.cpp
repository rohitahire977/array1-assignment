#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        cin>>arr[i];
    }
    int k=1;
    for(int i=0;i<=(n-1);i++){
        k*=arr[i];
    }
    cout<<"the product of all the elements given in an array is:"<<k;
}