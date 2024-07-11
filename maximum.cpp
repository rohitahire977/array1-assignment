#include<iostream>
#include<climits>//intmin intmax.
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        cin>>arr[i];
    }
    int k=0;
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the maximum element in array is:"<<max<<endl;
//second largest element in an array.
int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }
    cout<<"the second maximum element in array is:"<<second_max;
}