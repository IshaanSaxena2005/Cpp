#include<iostream> 
using namespace std;

int decTOBinary(int decNum){
    int ans=0;
    int pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int decNum=50;
    cout<<decTOBinary(decNum);
    return 0;
}