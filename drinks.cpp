#include<iostream>
using namespace std;
int main()
{
    float n,s,sum;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        sum=sum+s;
    }
    float num = sum/n;
    cout << num;
    
    return 0;
}