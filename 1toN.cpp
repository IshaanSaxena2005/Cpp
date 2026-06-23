#include<iostream>
using namespace std;
int cnt=1;
void print(int n){
        if(cnt>n){
            return;
        }
        cout<<cnt<<" ";
        cnt++;
        print(n);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    print(n);
    return 0;
}