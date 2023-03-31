#include <iostream>

using namespace std;

int main()
{
    int N;
    string a[150];
    cin >> N;
    int i = 0;
    while( i<N )
    {
        cin >> a[i];
        i++;
    }
    int o = 0, n=0;
    while( n<i )
    {
        if(a[n] == "X++")
        {
            o = o+1;
        }
        else if(a[n] == "++X")
        {
            o = o+1;
        }
        else if(a[n] == "--X")
        {
            o = o-1;
        }
        else if(a[n] == "X--")
        {
            o = o-1;
        }
    n++;
    }
    cout << o << endl;


    return 0;
}
