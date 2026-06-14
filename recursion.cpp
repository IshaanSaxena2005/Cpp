#include<iostream>
using namespace std;
int cnt=0;
void print(int n){
        if(cnt==3){
            return;
        }
        else{
            cout<<cnt<<" ";
            cnt++;
            print(n);
        }
}

int main(){
    print(4);
    return 0;
}