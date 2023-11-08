#include <iostream>

using namespace std;

template <class T>

T add(T x, T y)
{
    T z;
    z = x + y;

    return z;
}

int main()
{
    int p = 2, q = 3, r;
    float a = 2.3, b = 3.5, c;

    // r = add<int>(p, q);
    r = add(p, q);
    // c = add<float>(a, b);
    c = add(a, b);

    cout << "r : " << r << endl;
    cout << "c : " << c << endl;

    return 0;
}