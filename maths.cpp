#include <iostream>
using namespace std;

int main(){

    string input;
    getline(cin, input);
    int sizee = input.size();
    for(int i=0; i<sizee; i=i+2){
        if(input[i]>= input[i+2]){
            int k;
            k = input[i+2];
            input[i+2] = input[i];
            input[i] = k;

        }
    }
    cout << input << endl;

    return 0;
}
