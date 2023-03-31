#include <iostream>
using namespace std;
int main()
{
    int n, m=0, o=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A'){
            m++;
        }
        else{
            o++;
        }
    }
    if(m==o){
        cout << "Friendship";
    }
    else if(m>(n/2))
    {
        cout << "Anton";
    }
    else{
        cout << "Danik";
    }
    
    return 0;
}