/*Given a sorted array of integers, find the number of negative numbers.

Expected Time Complexity: O(log n)*/
#include<iostream>
#include<vector>
using namespace std;
int getNegativeNumbersCount(vector<int> &arr) {
    // add your logic here
	int i,f,count=0;
	for(i=0;i<arr.size() && f==1;++i)
	{
		if(arr[i]<0)
		{
			count++;
			f=1;
		}
		else
			f=0;
	}
	return count;
}