#include <complex>             // std::complex
#include <iostream>            // std::cout/endl
#include <unordered_map>       // std::unordered_map
#include <unordered_set>       // std::unordered_set
#include "output_container.h"  // operator<< for containers

using namespace std;

namespace std {

template <typename T>
struct hash<complex<T>> {
    size_t operator()(const complex<T>& v) const noexcept
    {
        hash<T> h;
        return h(v.real()) + h(v.imag());
    }
};

}  // namespace std

int main()
{
    unordered_set<int> s{1, 1, 2, 3, 5, 8, 13, 21};
    cout << s << endl;

    unordered_map<complex<double>, double> umc{{{1.0, 1.0}, 1.4142},
                                               {{3.0, 4.0}, 5.0}};
    cout << umc << endl;
}
