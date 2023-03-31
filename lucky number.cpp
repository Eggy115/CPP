#include<iostream>
using namespace std;

int main()
{
    string n;
    int k = 0;
    cin >> n;
    for(int i=0; i<n.size(); i++)
    {
        int m = n[i]-48;
        if(m==4||m==7)
        {
            k = k+1;
        }
    }
    
    if(k==4||k==7)
    {
        cout <<"YES" << endl;
    }
    else
    {
        cout <<"NO" << endl;
    }

    
    return 0;
}