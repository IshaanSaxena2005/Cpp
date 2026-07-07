#include<iostream>
using namespace std;
int cnt=1;
int sum=0;
void print(int n){
        if(cnt>n){
            return;
        }
        sum+=cnt;
        cnt++;
        print(n);
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    print(n);
    cout<<sum;
    return 0;
}