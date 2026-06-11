#include <iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int revNum=0;
        cout<<"Enter a num:";
        while(n>0){
            int lastDigit=n%10;
            n=n/10;
            revNum=(revNum*10)+lastDigit;
        }
        cout<<"Reverse Number is:"<<revNum;
        return 0;
}