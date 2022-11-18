#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int sum_max = -1;
    int sum_check = 0;

    for (size_t i = 0; i < keyboards.size(); ++i)
    {
        for (size_t j = 0; j < drives.size(); ++j)
        {
            sum_check = keyboards[i] + drives[j];
            if (sum_check > sum_max && sum_check <= b)
            {
                sum_max = sum_check;
            }
        }
    }
    
    return sum_max;
}
