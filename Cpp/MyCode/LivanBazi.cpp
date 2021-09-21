// 70 / 100

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    char gram_spot;
    cin >> gram_spot;
    //cout << "\noutput: " << gram_spot << "\n";

    for (size_t i = 0; i < n; i++)
    {
        char src_spot;
        cin >> src_spot;
        char dst_spot;
        cin >> dst_spot;

        char new_gram_spot = gram_spot;

        if (src_spot == gram_spot)
        {
            new_gram_spot = dst_spot;
        }
        else if (dst_spot == gram_spot)
        {
            new_gram_spot = src_spot;
        }

        gram_spot = new_gram_spot;
        //cout << "\noutput: " << gram_spot << "\n";

    }

    cout << gram_spot;
    
    return 0;

}