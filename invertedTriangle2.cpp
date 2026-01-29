#include<iostream>
using namespace std;
int main(){
    int n=4;
    char alpha='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<alpha;
        }
    cout<<"\n";
    alpha++;
    }
    
    return 0;
}