#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
        cout<<"a is largest";
    else if(b>a && b>c)
         cout<<"b is largest";
    else
        cout<<"c is largest";
    return 0;
}