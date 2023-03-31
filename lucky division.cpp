#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >>s;
        if(s==1){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    
    return 0;
}