// 9 / 100

#include <iostream>
#include <cmath>

using namespace std;
 


int main()
{

    int k;
    cin >> k;

    int a;
    cin >> a;
    
    
    int b;
    cin >> b;

    if (b < a){
        int temp = a;
        a = b;
        b = temp;
    }

    if (k == 1){
        cout << (a - b);
    }
    
    int ans = 0;

    int k_src, k_dst;

    if (a % k < k / 2)
    {
        k_src = a - (a % k); 
        ans += a % k;
        //cout <<  a - (a % k) << " -> a - a % k\n";
    }
    else{
        k_src = a - (a % k) + k;
        ans += k - (a % k);
        //cout <<  a - (a % k) + k<< " -> a - a % k + k\n";
    }

    if (b % k <= k / 2)
    {
        k_dst = b - (b % k); 
        ans += b % k;
    }
    else{
        k_dst = b - (b % k) + k;
        ans += k - (b % k);
    }

    //cout << "src: " << k_src << "\ndst: " << k_dst << "\nans: " << ans << "\n";

    ans += (k_dst - k_src) / k;

    cout << ans;

    return 0;
}