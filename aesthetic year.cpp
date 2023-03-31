#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    s=s+1;
    int a=s/1000,b=(s/100)%10,c=(s/10)%10,d=s%10;
    while(a==b||a==c||a==d||b==c||b==d||c==d)
    {
        s=s+1;
        a=s/1000,b=(s/100)%10,c=(s/10)%10,d=s%10;
    }
    cout << s;
    return 0;
}