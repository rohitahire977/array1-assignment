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
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the minimum element in array is:"<<min<<endl;
//second least element in an array.
int second_min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<second_min && arr[i]!=min){
            second_min=arr[i];
        }
    }
    cout<<"the second minimum element in array is:"<<second_min;
}