#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    cout << "    | 1 1 1 1 0 0 0 0" << "\n";
    cout << "    | 1 1 0 0 1 1 0 0" << "\n";
    cout << "    | 1 0 1 0 1 0 1 0" << "\n";
    cout << "---------------------" << "\n";

    size_t function_number = 1;

    for (size_t a = 0; a < 2; a++)
    for (size_t b = 0; b < 2; b++)
    for (size_t c = 0; c < 2; c++)
    for (size_t d = 0; d < 2; d++)
    for (size_t e = 0; e < 2; e++)
    for (size_t f = 0; f < 2; f++)
    for (size_t g = 0; g < 2; g++)
    for (size_t h = 0; h < 2; h++)
    {
        cout << setw(3) << setfill('0') 
        << function_number << " | " 
        << a << " " << b << " " 
        << c << " " << d << " " 
        << e << " " << f << " " 
        << g << " " << h << "\n";
        function_number++;
    }    
}