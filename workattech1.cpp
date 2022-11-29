/*
Given a sorted array and a number key, find the index of the first and last occurrence of the key in the array.

If the key is not present, return [-1, -1].

Expected Time Complexity: O(log n)
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int> &arr, int key) {
    // add your logic here
	int n=arr.size(),i=0,first=-1,last=-1;
	vector<int> check;
	while(i<n)
	{
		if(first==-1 && arr[i]==key)
			first=i;
		if(arr[i]==key)
			last=i;
		i++;
	}
	check={first,last};
	return check;
}