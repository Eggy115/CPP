#include <iostream>
using namespace std;
int main()
{
    int h, n, a[1000];
    cin >> n >> h;
    int w=n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]>h){
            w=w+1;
        }
    }
    cout << w;
    
    return 0;
}