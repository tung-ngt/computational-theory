#include <iostream>
#include <vector>

void print_vector(const std::vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); ++i)
    { std::cout << " " << *i; }
    std::cout << "\n";
}

int bubble_sort_comparisions(std::vector<int> arr)
{
    int comparisions = 0;
    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        for (size_t i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            comparisions++;
        }
    }
    print_vector(arr);
    return comparisions;
}

int insertion_sort_comparisions(std::vector<int> arr)
{
    int comparisions = 0;
    for (size_t i = 1; i < arr.size(); i++)
    {
        int j = i;
        while (j > 1 && arr[j] < arr[j-1])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            comparisions++;
            j--;
        }
    }
    print_vector(arr);
    return comparisions;
}

int main(int argc, const char * argv[])
{
    std::vector<int> a{0, 9, 8, 6, 2, 4, 3, 1, 7, 5};
    
    std::cout << bubble_sort_comparisions(a) << "\n\n";
    std::cout << insertion_sort_comparisions(a) << "\n\n";
}