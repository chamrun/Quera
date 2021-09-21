// 100 / 100

#include <iostream>

using namespace std;

bool has_four_digits(string number)
{
    number = "changed";
    /*
    int counter = 0;
    for (size_t j = 0; j < number.length(); j++)
    {
        char to_be_counted = number.at(j);

        for (size_t k = ; k < count; k++)
        {
        }
    }


    */

    return true;

}

int main()
{
    int n;
    cin >> n;
    string numbers[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (size_t i = 0; i < n; i++)
    {

        if (has_four_digits(numbers[i]))
        {
            
        }
    }

    return 0;
}