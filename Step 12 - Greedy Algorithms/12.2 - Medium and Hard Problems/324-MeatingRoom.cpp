#include <bits/stdc++.h>
using namespace std;

// Container to bundle start and end times together
struct meetings
{
    int start;
    int end;
    int pos;
};

// Comparator: Sort by end time ascending
bool comp(meetings a, meetings b)
{
    return a.end < b.end;
}

int maxMeetings(int start[], int end[], int n)
{
    vector<meetings> meet(n);
    for (int i = 0; i < n; i++)
    {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i + 1;
    }

    // Sort using our custom rule
    sort(meet.begin(), meet.end(), comp);

    int countMeetings = 1; // Take the first meeting
    vector<int> ds;
    int last_end_time = meet[0].end;

    for (int i = 1; i < n; i++)
    {
        // If the meeting starts after or when the previous one ends
        if (meet[i].start >= last_end_time)
        {
            countMeetings++;
            ds.push_back(meet[i].pos);
            last_end_time = meet[i].end; // Move timeline boundary forward
        }
    }
    return countMeetings;
}

int main()
{
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);

    cout << "Maximum meetings possible: " << maxMeetings(start, end, n) << endl;
    return 0;
}
