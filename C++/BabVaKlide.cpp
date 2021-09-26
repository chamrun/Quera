// 100 / 100

#include <iostream>


using namespace std;

int main()
{

    int n;
    cin >> n;

    int x;
    cin >> x;

    int k;
    cin >> k;

    string channels[n];
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> channels[i];
    }

    x += k;

    while (n < x)
    {
        x -= n;
    }
    
    cout << channels[x - 1];

    return 0;
}