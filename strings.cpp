#include <iostream>
using namespace std;

int stringIs(string s1, string s2)
{
    int result;
    for(int i = 0; i<s1.size(); i++){
        if(s1[i] < 92){
            s1[i] += 32;
        }
        if(s2[i] < 92){
            s2[i] += 32;
        }
    }
    if(s1<s2){
        result = -1;
    }
    if(s1>s2){
        result = 1;
    }
    if(s1 == s2){
        result = 0;
    }
    return result;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << stringIs(s1, s2) << endl;
    return 0;
}
