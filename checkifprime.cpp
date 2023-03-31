#include<iostream>
using namespace std;
bool prime(int a){
    int n=0;
    for(int i=a; i>=1; i--){
        if(a%i==0){
            n=n+1;
        }
    }
    if(n==2) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    cout << prime(n);
}
