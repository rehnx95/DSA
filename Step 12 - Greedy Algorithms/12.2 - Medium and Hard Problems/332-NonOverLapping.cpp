#include <bits/stdc++.h>
using namespace std;

// Container to bundle start and end times together
struct Interval
{
    int start;
    int end;
};

// Comparator: Sort by end time ascending (Identical to Meeting Rooms)
bool compareIntervals(Interval a, Interval b)
{
    return a.end < b.end;
}

int eraseOverlapIntervals(vector<vector<int>> &intervals)
{
    if (intervals.empty())
        return 0;

    int n = intervals.size();
    vector<Interval> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i].start = intervals[i][0];
        arr[i].end = intervals[i][1];
    }

    // Sort using our custom rule
    sort(arr.begin(), arr.end(), compareIntervals);

    int countMeetings = 1; // Count how many non-overlapping intervals we keep
    int last_end_time = arr[0].end;

    for (int i = 1; i < n; i++)
    {
        // Identical matching logic to N Meeting Rooms
        if (arr[i].start >= last_end_time)
        {
            countMeetings++;
            last_end_time = arr[i].end;
        }
    }

    // Total items minus the ones we safely kept = items to throw away
    return n - countMeetings;
}

int main()
{
    vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    cout << "Minimum intervals to remove: " << eraseOverlapIntervals(intervals) << endl;
    return 0;
}
