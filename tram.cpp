#include <iostream>
using namespace std;
int main()
{
    int n,num=0,n1=0,n2;
    cin >>n;
    int a[1000],b[1000];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
        cin>> b[i];
        num = num-a[i];
        num = num+b[i];
        if(num>n1){
            n1=num;
        }
    }
    cout << n1;

    
    return 0;
}