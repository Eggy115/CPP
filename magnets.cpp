#include<iostream>
using namespace std;
int main()
{
    int n,num=1;
    string a, b;
    cin >> n >> a;
    for(int i=1; i<n; i++)
    {
        cin >> b;
        if(a!=b){
            a=b;
            num=num+1;
        }
    }
    cout << num;
    
    return 0;

}