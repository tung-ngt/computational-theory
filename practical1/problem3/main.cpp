#include <iostream>
#include <vector>
#define PENNY 1
#define NICKLE 5
#define DIME 10
#define QUATER 25

std::vector<int> greedy_changes(int no_cents)
{
    std::vector<int> changes{0, 0, 0, 0};

    while (no_cents >= QUATER)
    {
        changes[3]++;
        no_cents -= QUATER;
    }

    while (no_cents >= DIME)
    {
        changes[2]++;
        no_cents -= DIME;
    }

    while (no_cents >= NICKLE)
    {
        changes[1]++;
        no_cents -= NICKLE;
    }

    while (no_cents >= PENNY)
    {
        changes[0]++;
        no_cents -= PENNY;
    }

    return changes;
}

int main(int argc, const char * argv[])
{
    int no_cents = 116;
    std::vector<int> changes = greedy_changes(no_cents);
    std::cout << "QUATER: " << changes[3] << "\n";
    std::cout << "DIME: " << changes[2] << "\n";
    std::cout << "NICKLE: " << changes[1] << "\n";
    std::cout << "PENNY: " << changes[0] << "\n";
}