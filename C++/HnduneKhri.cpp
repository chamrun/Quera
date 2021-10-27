// 100 / 100

#include <iostream>
#include <map>

using namespace std;
 


int main()
{

    int t;
    cin >> t;

    int max = 0;
    int ans;

    for (size_t i = 0; i < t; i++)
    {
        int x;
        cin >> x;

        if (max < x){
            max = x;
            ans = i + 1;
        }

    }

    cout << ans;

    return 0;
}