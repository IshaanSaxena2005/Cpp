#include<iostream>
using namespace std;
int minNum(int a, int b){
        if(a<b){
            cout<<"a is min";
        }
        else{
            cout<<"b is min";
        }
}

int main(){
    minNum(13,9);
    return 0;
}