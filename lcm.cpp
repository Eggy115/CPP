#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << "LCM of "<<n<<" and "<<m<<" is " << lcm(n,m);
    return 0;
}
