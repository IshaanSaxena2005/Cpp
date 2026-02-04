#include<iostream> 
using namespace std;
int fact(int n){
    int facto=1;
    for(int i=1;i<=n;i++){
        facto*=i;
    }
    return facto;
}

int main(){
    cout<<fact(4);
    return 0;
}