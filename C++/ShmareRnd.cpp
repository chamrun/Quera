// 100 / 100

#include <iostream>

using namespace std;

bool has_four_digits(string number)
{

    for (size_t i = 0; i < number.length() - 2; i++)
    {
        if (number.at(i) == '!')
            continue;

        int counter = 0;
        for (size_t j = i + 1; j < number.length(); j++)
        {
            if (number.at(j) == number.at(i))
            {
                number.at(j) == '!';
                counter++;
                if (counter == 3)
                    return true;
            }
        }

        number.at(i) = '!';
    }

    return false;
}

bool has_three_digits(string number)
{   
    //cout << "started...";
    for (size_t i = 0; i < number.length() - 2; i++)
    {
        //cout << number.at(i) << number.at(i + 1) << number.at(i + 2) << ".\n";
        if (number.at(i) == number.at(i + 1) && number.at(i) == number.at(i + 2))
            return true;
    }

    return false;
}

bool is_mirror(string number)
{
    for (size_t j = 0; j < number.length() / 2; j++)
    {
        if(number.at(j) != number.at(number.length() - 1 - j))
            return false;
    }

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
            cout << "Ronde!";
        else if (has_three_digits(numbers[i]))
            cout << "Ronde!";
        else if (is_mirror(numbers[i]))
            cout << "Ronde!";
        else
            cout << "Rond nist.";
    }

    return 0;
}