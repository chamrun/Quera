// 100 / 100

#include <iostream>
#include <cmath>

using namespace std;
 


int main()
{

    double n;
    cin >> n;

    int k;
    cin >> k;

    for (size_t i = 0; i < k; i++)
    {
        n /= 2;
    }

    cout << floor(n);

    return 0;
}