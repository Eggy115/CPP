#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=0,m=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >92)
        {
            n = n+1;
        }
        if(s[i] <92)
        {
            m = m+1;
        }
    }
    if(n>=m)
    {
        for(int j=0; j<s.size();j++)
        {
            if(s[j]<92)
            {
                s[j] += 32;
            }
        }
    }
    if(n<m)
    {
        for(int k=0; k<s.size();k++)
        {
            if(s[k]>92)
            {
                s[k] -= 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}
