#include<iostream>
using namespace std;
string hq(string a)
{
    for(int i=0 ; i<a.length(); i++){
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9') return "YES";
    }
    return "NO";
}
int main(){
    string s;
    cin >> s;
    cout << hq(s);
}