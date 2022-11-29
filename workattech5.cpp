/*Given the start and finish time of n meetings and just one room to conduct them, find the maximum number of meetings that can be accommodated in that room.

The start and end times are given in minutes from 12:00 AM*/
#include<iostream>
#include<vector>
using namespace std;
class Meeting {
public:
    int start, end;
    Meeting(int start, int end) {
        this->start = start;
        this->end = end;
    }
};
int compare(Meeting *m1,Meeting *m2)
{
	return m1->end < m2->end;
}
int getMaxMeetings(vector<Meeting*> &meetings) {
    // add your logic here
	sort(meetings.begin(),meetings.end(),compare);
	int time_limit=meetings[0]->end,count=1;
	for(int i=1;i<meetings.size();++i)
	{
		if(meetings[i]->start >= time_limit)
		{
			count++;
			time_limit=meetings[i]->end;
		}
	}
	return count;
	
}