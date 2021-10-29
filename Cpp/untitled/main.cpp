
void Fantasy2::main(std::vector<std::wstring> &args)
{
    Scanner *sc = new Scanner(System::in);

    int max = 0;
    std::wstring maxName = L"";

    while (sc->hasNext())
    {
        std::wstring playerData = sc->nextLine();
        std::vector<std::wstring> data = playerData.split(L" ");
        int point = 0;

        if (L"60" == data[2])
        {
            point += 2;
        }
        else if (60 < std::stoi(data[2]))
        {
            point += 3;
        }

        if (data[1] == L"GKP")
        {
            point += std::stoi(data[3]) * 6;
            point += std::stoi(data[4]) * 3;
            point -= (std::stoi(data[5]) / 2);
            point += (std::stoi(data[6]) / 3);
            point += 5 * (std::stoi(data[7]));
            point -= 2 * (std::stoi(data[8]));
            point -= std::stoi(data[9]);
            point -= std::stoi(data[10]) * 3;
            point -= std::stoi(data[11]) * 2;

        }
//ORIGINAL LINE: case "DEF":
        else if (data[1] == L"DEF")
        {
            point += std::stoi(data[3]) * 6;
            point += std::stoi(data[4]) * 3;
            int number_of_goal_conceded = std::stoi(data[5]);
            point -= (number_of_goal_conceded) / 2;
            int penalty_misses = std::stoi(data[6]);
            point -= (penalty_misses) * 2;
            int yellow = std::stoi(data[7]);
            point -= (yellow);
            int red = std::stoi(data[8]);
            point -= 3 * (red);
            int own = std::stoi(data[9]);
            point -= own * 2;

            if (number_of_goal_conceded == 0)
            {
                point += 4;
            }

        }
//ORIGINAL LINE: case "MID":
        else if (data[1] == L"MID")
        {
            point += std::stoi(data[3]) * 5;
            point += std::stoi(data[4]) * 3;
            number_of_goal_conceded = std::stoi(data[5]);
            point -= (number_of_goal_conceded) / 2;
            penalty_misses = std::stoi(data[6]);
            point -= (penalty_misses) * 2;
            yellow = std::stoi(data[7]);
            point -= (yellow);
            red = std::stoi(data[8]);
            point -= 3 * (red);
            own = std::stoi(data[9]);
            point -= own * 2;

            if (number_of_goal_conceded == 0)
            {
                point += 1;
            }

        }
//ORIGINAL LINE: case "FWD":
        else if (data[1] == L"FWD")
        {
            point += std::stoi(data[3]) * 4;
            point += std::stoi(data[4]) * 3;
            penalty_misses = std::stoi(data[5]);
            point -= (penalty_misses) * 2;
            yellow = std::stoi(data[6]);
            point -= (yellow);
            red = std::stoi(data[7]);
            point -= 3 * (red);
            own = std::stoi(data[8]);
            point -= own * 2;

        }
        else
        {
            std::wcout << data[1] << L" :: INVALID!" << std::endl;
        }
        //pn(data[0] + ": " + point);

        if (max < point)
        {
            max = point;
            maxName = data[0];
        }
        sc++;
    }


    std::wcout << maxName << std::endl;

    delete sc;
}

void Fantasy2::pn(const std::wstring &s)
{
    std::wcout << s << std::endl;
}


#pragma once

#include <string>
#include <vector>
#include <iostream>

class Fantasy2
{

public:
    static void main(std::vector<std::wstring> &args);

private:
    static void pn(const std::wstring &s);
};


#pragma once

#include <string>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<std::wstring> args(argv + 1, argv + argc);
    Fantasy2::main(args);
}