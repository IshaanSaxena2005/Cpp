#include<iostream>
using namespace std;
int cnt=0;
int n;
string name;
void print(){
        if(cnt==n){
            return;
        }
        cout<<name<<endl;
        cnt++;
        print();
}

int main(){
    cout<<"Enter a no:";
    cin>> n;
    cout<<"Enter a name:";
    cin>> name;
    print();
    return 0;
}