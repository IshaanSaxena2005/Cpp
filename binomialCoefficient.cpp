#include<iostream> 
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n, int r){
    int nFact=factorial(n);
    int rFact=factorial(r);
    int nmrFact=factorial(n-r);
    return nFact/(rFact*nmrFact);
}

int main(){
    cout<<ncr(6,3);
    return 0;
}