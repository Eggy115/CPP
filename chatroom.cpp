#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h'){
            int j=i+1;
            for(;j<s.size();j++){
                if(s[j]=='e'){
                    int k=j+1;
                    for(;k<s.size();k++){
                        if(s[k]=='l'){
                            int l=k+1;
                            for(;l<s.size();l++){
                                if(s[l]=='l'){
                                    int m=l+1;
                                    for(;m<s.size();m++){
                                        if(s[m]=='o'){
                                            u=1;
                                        }
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(u==1){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}