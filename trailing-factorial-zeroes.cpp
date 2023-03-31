#include<iostream>
using namespace std;
/*Given an integer n, write a function that returns count of trailing zeroes in n!. */
int trailingZerosInFactorial(int a){
    int res = 0;
    for(int i=5; i<=a; i=i*5){
        res=res+a/i;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int answer = trailingZerosInFactorial(n);
    cout << answer;

    
    
    return 0;
}
