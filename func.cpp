#include <iostream>
using namespace std;
long long int nums(long long int a)
{
    long long int l=0;
    if(a%2==0)
    {
        l=a/2;
    }
    else if(a==1)
    {
        return -1;
    }
    else{
        l=-(a+1)/2;
    }

    
    return l;
}
int main(){
    long long int n;
    cin >> n;
    cout << nums(n);
}