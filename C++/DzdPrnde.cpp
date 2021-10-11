// 0 / 100

#include <iostream>
#include <map>

using namespace std;
 


int main()
{

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n_floors;
        cin >> n_floors;

        int n_polices;
        cin >> n_polices;
        map<int, int> polices;

        for (size_t j = 0; j < n_polices; j++)
        {
            int police_floor;
            int police_side;
            cin >> police_floor;
            cin >> police_side;
            polices[police_floor] = police_side;
        }

        for (size_t i = 0; i < n_polices; i++)
        {
            cout << polices.at(i);
        }

        

    }

    return 0;
}