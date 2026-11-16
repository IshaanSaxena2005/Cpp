#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]==0||arr[i]==1||arr[i]==2){
            continue;
        }
        else{
            cout<<"Array not possible";
        }
    }
    int zeroes=0;
    int ones=0;
    int twos=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroes++;
        }
        else if(arr[i]==1){
            ones++;
        }
        else if(arr[i]==2){
            twos++;
        }
        else{
            cout<<"Invalid Color";
            break;
        }
    }
    for(int i=0;i<zeroes;i++){
        arr[i]=0;
    }
    for(int i=zeroes;i<zeroes+ones;i++){
        arr[i]=1;
    }
    for(int i=zeroes+ones;i<n;i++){
        arr[i]=2;
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}