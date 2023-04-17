#include <iostream>
#include <vector>

int find_index_loop(const std::vector<int> arr, int n)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
        { return i; }
    }
    return -1;
}

int find_index_binary(const std::vector<int> arr, int n)
{
    size_t left = 0;
    size_t mid = arr.size() / 2;
    size_t right = arr.size();

    while (arr[mid] != n)
    {
        if (arr[mid] > n)
        { right = mid; }
        else
        { left = mid; }

        mid = (right + left) / 2;
    }

    return mid;
}

int main(int argc, const char * argv[])
{
    std::vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << find_index_loop(arr, 8);
}