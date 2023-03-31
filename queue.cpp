
#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    string a;
    cin >> a;
    for(int j=0; j<t; j++)
    {
    for(int i=0; i<n;)
    {
        if(a[i]=='B' && a[i+1]=='G')
        {
            
            swap(a[i],a[i+1]);
            
            i=i+2;
        }
        else{
            i=i+1;
        }
    }
    }
    cout << a;

    return 0;
}
