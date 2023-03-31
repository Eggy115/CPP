#include<iostream>
using namespace std;
//This is Simple function to find GCD
int gcdOfTwoNumbers(int a, int b){
    if(b==0){
        return a;
    }
    return gcdOfTwoNumbers(b,a%b);
}
int main(){
    int a,b;
    cin >> a>>b;
    cout << gcdOfTwoNumbers(a,b)<< endl;
    
    return 0;
}
