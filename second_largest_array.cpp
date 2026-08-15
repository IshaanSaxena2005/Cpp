#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;

    int arr[n];
    cout<<"Enter array:";
    
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }   
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    if(slargest == INT_MIN)
        cout << "Second Largest doesn't exist";
    else
        cout<<"Second Largest element is:"<<slargest;
    return 0;
}