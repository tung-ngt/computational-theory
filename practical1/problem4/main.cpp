#include <vector>
#include <iostream>

using std::vector;
vector<vector<int>> get_schedule(vector<vector<int>> talks)
{
    vector<vector<int>> schedule;

    // Loop until there are no talks left
    while (talks.size() > 0)
    {
        // Push the talk with the min end time to the schedule
        vector<int> min_end_time = talks[0];
        for (auto i = talks.begin(); i != talks.end(); ++i)
        {
            if (i->at(1) <= min_end_time[1])
            { min_end_time = *i; }
        }
        schedule.push_back(min_end_time);

        // Keep non conflicting talks
        vector<vector<int>> remaining_talks;
        for (auto i = talks.begin(); i != talks.end(); ++i)
        {
            if (i->at(0) >= min_end_time[1])
            {
                vector<int> t(i->begin(), i->end());
                remaining_talks.push_back(t);
            }
        }
        talks = remaining_talks;
      
    }
    return schedule;
}

int main(int argc, const char * argv[])
{
    vector<vector<int>> arr
    {
        {900, 1000},
        {930, 1000},
        {945, 1030},
        {1010, 1040},
        {1005, 1100},
        {1030, 1120},
        {1010, 1200},
        {1040, 1130}
    };

    vector<vector<int>> schedule = get_schedule(arr);
    for (auto i = schedule.begin(); i != schedule.end(); ++i)
    {
        std::cout << i->at(0) << "," << i->at(1) << "\n";
    }
}