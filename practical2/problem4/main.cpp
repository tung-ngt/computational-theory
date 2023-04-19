#include <iostream>
#include <vector>

using std::vector;

int threshold_gate(float threshold, vector<float> weights, vector<int> input)
{
    int sum = 0;
    for (size_t i = 0; i < weights.size(); i++)
    { sum += weights[i] * input[i]; }

    if (sum >= threshold)
    { return 1; }

    return 0;
}


int main(int argc, const char * argv[])
{
    int threshold = -1;
    vector<float> weights {2, 1, -4};
    vector<int> input {0, 1, 0};

    std::cout << threshold_gate(threshold, weights, input);
}