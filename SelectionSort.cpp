#include <iostream>
#include <cstdio>
#include <vector>

// implementing selection sort

void SelectionSort(std::vector<int>& arr, const bool desc = false)
{
    const int invert = (desc) ? (-1) : (1);
    const int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        int targetPos = i;

        // Select a target
        for (int j = i; j < size; j++)
        {
            if (invert * arr[targetPos] > invert* arr[j])
            {
                targetPos = j;
            }
        }

        // if finished, swap values
        int swap = arr[i];
        arr[i] = arr[targetPos];
        arr[targetPos] = swap;
    }
}

int main(void)
{
    std::vector<int> arr;
    int n, input;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> input;
        arr.push_back(input);
    }

    SelectionSort(arr);
    //SelectionSort(arr, true);

    for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); ++i)
    {
        std::cout << *i << ' ';
    }

    std::cout << std::endl;

    return 0;
}