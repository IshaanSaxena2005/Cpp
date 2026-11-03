#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter no of elements:";
    cin >> n;

    int arr[n];
    cout<<"Enter array:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout<<"Enter window size:";
    cin>>k;
    int windowSum=0;
    for(int i=0;i<k;i++){
        windowSum+=arr[i];
    }
    int maxSum=windowSum;
    for(int i=k;i<n;i++){
        windowSum+=arr[i];
        windowSum-=arr[i-k];
        maxSum=max(maxSum,windowSum);
    }
    cout<<maxSum;
    return 0;
}