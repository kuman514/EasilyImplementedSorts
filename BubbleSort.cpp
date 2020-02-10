#include <iostream>
#include <cstdio>
#include <vector>

// implementing bubble sort

void bubbleSort(std::vector<int>& arr, bool desc = false)
{
    const int size = arr.size();
    const int invert = (desc) ? (-1) : (1);

    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (invert * arr[j - 1] > invert* arr[j])
            {
                // swap value
                int swap = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = swap;
            }
        }
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

    bubbleSort(arr);
    //bubbleSort(arr, true);

    for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); ++i)
    {
        std::cout << *i << ' ';
    }

    std::cout << std::endl;

    return 0;
}