#include<iostream>
using namespace std;
//predict any duplicate element exists or not
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        cin>>arr[i];
    }
    int duplicate=0;
    for(int i=0;i<=(n-1);i++){
        if(arr[i]==arr[i+1]){
            duplicate++;
        }
    }
    cout<<"the same elements given in an array is:"<<duplicate;
}