#include <iostream>
using namespace std;
int main(){
        int n;
        int num=0;
        cout<<"Enter a num:";
        cin>>n;
        while(n>0){
            int lastDigit=n%10;
            n=n/10;
            num++;
        }
        cout<<"Number of digits are:"<<num;
        return 0;
}