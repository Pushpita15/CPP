/*Given a matrix, check if the matrix contains a given key.

The matrix has the following properties:

Integer in each row is arranged in non-decreasing order from left to right.
The first integer in every row is greater than the last integer of the previous row.
Expected Time Complexity: O(log (n*m))*/
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int key) {
    // add your logic here
	int m=matrix.size(),n=matrix[0].size();;
	int i=0,term;
	
	int j=m*n-1;
	int mid=(i+j)/2;
	while(i<=j)
	{
		term=matrix[mid/n][mid%n];
		if(term==key)
			return true;
		else if(term < key)
			i=mid+1;
		else
			j=mid-1;
		mid=(i+j)/2;
		
	}
	return false;
}