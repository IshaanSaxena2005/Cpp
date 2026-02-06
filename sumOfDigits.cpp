#include<iostream> 
using namespace std;

int sumDigit(int num){
    int digitSum=0;
    while(num>0){
        digitSum+=num%10;
        num/=10;
    }
    return digitSum;
}
int main(){
    cout<<sumDigit(2356);
    return 0;
}