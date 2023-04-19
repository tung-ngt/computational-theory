#include <iostream>
#include <vector>

using std::vector;

void print_row(int no_variables, vector<int> & arr)
{
    for (size_t i = 0; i < no_variables; i++)
    { std::cout << arr[i] << "  | "; }
}

void build_table
(
    int no_variables, 
    vector<int> & arr, 
    vector<vector<int>> & ones, 
    int index = 0
)
{      
    if (index == (no_variables - 1))
    {
        for (size_t i = 0; i < 2; i++)
        {
            arr[index] = i;
            print_row(no_variables, arr);
            int output;
            std::cin >> output;

            if (output == 1)
            { ones.push_back(arr); }
        }
        return;
    }
    for (size_t i = 0; i < 2; i++)
    { 
        arr[index] = i;
        build_table(no_variables, arr, ones, index + 1);
    }
}

void sum_of_products_expansion(vector<vector<int>> ones)
{
    std::cout << "f = ";
    for (size_t i = 0; i < ones.size(); i++)
    {
        for (size_t j = 0; j < ones[i].size(); j++)
        {
            if (ones[i][j] == 0)
            { std::cout << "-"; }
            std::cout << "x" << j; 
            if (j != (ones[i].size() - 1))
            {
                std::cout << " . ";
            }
        }
        if (i != (ones.size() - 1))
        { std::cout << " + "; }
    }
}

int main(int argc, const char * argv[])
{
    size_t n;

    std::cout << "Number of variables: ";
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    { std::cout << "x" << (i+1) << " | "; }
    std::cout << "output";
    std::cout << "\n";
    
    vector<int> arr(n, 0);
    vector<vector<int>> ones;
    build_table(n, arr, ones);
    sum_of_products_expansion(ones);
}