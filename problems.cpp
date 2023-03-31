#include<iostream>
using namespace std;

int main()
{
    int a,b,n=0;
    cin >> a >> b;
    while(a<=b)
    {
        a = a*3;
        b = b*2;
        n = n+1;
    }
    cout << n;
    return 0;
}

