#include<iostream>
using namespace std;

int main()
{
    string n;
    int m;
    cin >> n;
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]==n[i+1])
        {
            m=m+1;
            if(m==6)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            m=0;
        }
    }
    cout << "NO" << endl;
    return 0;
}