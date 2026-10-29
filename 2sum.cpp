#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no of elments:";
    int n;
    cin>>n;
    cout<<"Enter array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter target sum:";
    int target;
    cin>>target;
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<arr[left]<<" "<< arr[right];
            return 0;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"No pair found";
    return 0;
}