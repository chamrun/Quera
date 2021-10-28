// 100 / 100

#include <iostream>
#include <cmath>

using namespace std;
 


int main()
{

    double n;
    cin >> n;

    int m;
    cin >> m;
    
    int t = m * n;

    int ans = 0;

    for (size_t i = 0; i < t; i++)
    {
        char c;
        cin >> c;
        
        if (c == '*')
        {
            ans++;
        }
        
    }

    cout << ans;

    return 0;
}