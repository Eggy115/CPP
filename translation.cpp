#include <iostream>
using namespace std;
int main()
{
    string s, r;
    cin >> s;
    cin >> r;
    int n= s.size(),k=n-1, m=0;
    if(s.size()==r.size()){
    for(int i=0; i<n; i++){
        if(s[i]==r[k]){
            m=1;
        }else{
            cout << "NO";
            return 0;
        }
        k--;
    }
    if(m==1)cout << "YES";
    else cout << "NO";}
    else cout << "NO";
    return 0;
}
