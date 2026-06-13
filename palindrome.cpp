#include <iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter a num:";
        cin>>n;
        int num=n;
        int revNum=0;
        while(n>0){
            int lastDigit=n%10;
            n=n/10;
            revNum=(revNum*10)+lastDigit;
        }
        if(num==revNum){
            cout<<"Palindrome";
        }
        else{
            cout<<"Not";
        }
        return 0;
}