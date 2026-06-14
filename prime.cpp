#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"It is a Prime no.";
    }
    else{
        cout<<"Not a Prime no.";
    }
    return 0;
}