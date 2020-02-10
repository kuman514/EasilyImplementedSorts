#include <iostream>
#include <cstdio>
#include <vector>

// implementing insertion sort

void InsertionSort(std::vector<int>& arr, const bool desc = false)
{
    const int invert = (desc) ? (-1) : (1);
    const int size = arr.size();

    // first key starts at 2nd point
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (invert * arr[j - 1] > invert* arr[j])
            {
                // swap values
                int swap = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = swap;
            }
            else
            {
                break;
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

    InsertionSort(arr);
    //InsertionSort(arr, true);

    for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); ++i)
    {
        std::cout << *i << ' ';
    }

    std::cout << std::endl;

    return 0;
}