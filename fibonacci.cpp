#include <iostream>
using namespace std;
int f(int n){
    if(n<=1){
        return n;
    }
    int last =f(n-1);
    int slast=f(n-2);
    return last+slast;
}
int main(){
        int n;
        cout<<"Enter a num:";
        cin>>n;
        cout<<f(n);
        return 0;
}