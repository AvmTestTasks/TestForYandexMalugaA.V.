/*
 TASK1
 
 Find t he  kth l argest  element in  an  unsorted  array.
 Note that is the  kth largest  element in the sorted  order,
 not the  kth  distinct  element.
 For  example:
 Given [ 3,2,1,5,6,4]  and  k=2, r eturn  5.
 Note:  You  may  assume  k is  always  valid,  1<=k<=arrays length.
 
 Use the following  signature: int task1(vector<int>&  nums, int  k);
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int task1(vector<int>& nums, int k);

int main()
{

	int array[] = { 3, 2, 1, 5, 6, 4 };
	vector<int> nums(array, array + 6);

	
	int k = 2;

	cout << "Kth of largest element array is:" << task1(nums, k) << endl;

	system("pause");
	return 0;
}

int task1(vector<int>& nums, int k)
{
	int N = nums.size();
	sort(nums.begin(),nums.end());
	
	return nums[N-k];
}
