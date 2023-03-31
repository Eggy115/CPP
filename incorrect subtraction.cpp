#include<iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    

    while(k!=0)
    {
        if(n % 10 == 0)
        {
            n=n/10;
            k=k-1;
        }
        else
        {
            n=n-1;
            k=k-1;
        }  
    }
    cout << n << endl;

    return 0;
}