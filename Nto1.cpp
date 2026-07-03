#include<iostream>
using namespace std;
int cnt;
void print(int n){
        if(cnt<1){
            return;
        }
        cout<<cnt<<" ";
        cnt--;
        print(n);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cnt=n;
    print(n);
    return 0;
}