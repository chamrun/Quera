// 0 / 100

#include <iostream>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
 


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
    }

    return 0;
}