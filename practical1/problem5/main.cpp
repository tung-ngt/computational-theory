#include <iostream>
#include <vector>


int linear_search_comparisions(const std::vector<int> arr, int n)
{
    size_t comparisions = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
        { return ++comparisions; }
        ++comparisions;
    }
    return comparisions;
}

int binary_search_comparisions(const std::vector<int> arr, int n)
{
    size_t comparisions = 0;
    size_t left = 0;
    size_t mid = arr.size() / 2;
    size_t right = arr.size();

    while (arr[mid] != n)
    {
        if (arr[mid] > n)
        { right = mid; }
        else
        { left = mid; }
        ++comparisions;

        mid = (right + left) / 2;
    }

    return comparisions;
}

int main(int argc, const char * argv[])
{
    std::vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << linear_search_comparisions(arr, 8) << "\n";
    std::cout << binary_search_comparisions(arr, 8) << "\n";
}