#include <iostream>;
using namespace std;

int main()
{
    int M, N, m, n, p, total;
    cin >> M;
    cin >> N;

    if(M%2 == 0)
    {
        m = M/2;
        n = N;
        total = m*n;
        cout << total << endl;
    }
    else
    {
        m = M/2;
        n = N;
        p = n/2;
        total = (m*n) + p;
        cout << total << endl;
    }

    return 0;
}
//This is the first time my program got accepted in a single try.
