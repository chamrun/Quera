//
// Created by 1 on ۱۷/۰۹/۲۱.
//


#include <iostream>

using namespace std;

int SlamKhdafez(){

    int n;
    cin >> n;

    string names[n];

    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    for (int i = 1; i < n; ++i) {
        for (int j = i - 1; 0 <= j; --j) {
            cout << names[i] << ": salam " << names[j] << "!\n";
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << names[i] << ": khodafez bacheha!\n";
        for (int j = i + 1; j < n; ++j) {
            cout << names[j] << ": khodafez " << names[i] << "!\n";
        }
    }

    return 0;
}

