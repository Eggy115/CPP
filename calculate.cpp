#include<iostream>
using namespace std;

int main()
{
    int a=0,b,c;
    cin >> a >> c >> b;
    int j=a;
    if(b!=1) 
    {
    for(int i=2; i<=b; i++)
    {
       a = a+j*i; 
    }
    }
    int d;
    d = a-c;
    if(d<=0) cout << 0 << endl;
    else cout << d << endl;
    
    
    return 0;
}
