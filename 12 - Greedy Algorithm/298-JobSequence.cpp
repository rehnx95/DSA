#include <bits/stdc++.h>
using namespace std;

// Container for Job properties
struct Job
{
    int id;
    int dead;
    int profit;
};

// Comparator: Sort by profit descending
bool compareJobs(Job a, Job b)
{
    return a.profit > b.profit;
}

vector<int> JobScheduling(Job arr[], int n)
{
    // Sort items based on largest profit rule
    sort(arr, arr + n, compareJobs);

    // Find the maximum deadline limit to scale our time array size
    int maxDeadline = 0;
    for (int i = 0; i < n; i++)
    {
        maxDeadline = max(maxDeadline, arr[i].dead);
    }

    // Time slots timeline array initialized to empty (-1)
    vector<int> slot(maxDeadline + 1, -1);

    int countJobs = 0;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        // Move backwards from deadline day to find latest available slot
        for (int j = arr[i].dead; j > 0; j--)
        {
            if (slot[j] == -1)
            {
                slot[j] = arr[i].id; // Claim slot
                countJobs++;
                maxProfit += arr[i].profit;
                break; // Job scheduled, jump to next job iteration
            }
        }
    }

    return {countJobs, maxProfit};
}

int main()
{
    Job jobs[] = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};
    int n = sizeof(jobs) / sizeof(jobs[0]);

    vector<int> result = JobScheduling(jobs, n);
    cout << "Number of jobs done: " << result[0] << endl;
    cout << "Maximum profit earned: " << result[1] << endl;

    return 0;
}
