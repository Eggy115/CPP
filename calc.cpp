#include <iostream>
using namespace std;
int main()
{
    int n, a, b, m=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b ;
        if((b-a)>=2){
            m=m+1;
        }
    }
    cout << m;
    
    return 0;
}