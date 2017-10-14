/*
 TASK2
 
 Write  an  efficient  algorithm that  searches for  a  value in  a  MxN  matrix.
 
 This  matrix  has the following  properties:
 - integers in  each row  are  sorted in  ascending from left to right;
 - integers in  each  column  are  sorted in  ascending from top to  bottom;
 
 For  example:
 1  4  7  11  15
 2  5  8  12  19
 3  6  9  16  22
 10  13  14  17  24
 18  21  23  26  30
 
 
 Given target=5, return true. Given target=20, return false.
 
 Use following  signature: bool task2(vector<vector<int>  >&  matrix, int target);
 
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool task2(vector< vector<int> >& matrix, int target);

void show(vector<vector<int> >&);

int main()
{

	
	vector< vector<int> > matrix =
	{
		{ 1, 4, 7, 11, 15 },
		{ 2, 5, 8, 12, 19 },
		{ 3, 6, 9, 16, 22 },
		{ 10, 13, 14, 17, 24 },
		{ 18, 21, 23, 26, 30 }
	};

	
	cout << "Down left search in 2D array:" << endl;
	cout << task2(matrix,0) << endl;
	cout << task2(matrix,24) << endl;
	cout << task2(matrix,-3) << endl;
	cout << task2(matrix,31) << endl;
	
	
	system("pause");
	return 0;
}
bool task2(vector< vector<int> >& matrix, int target)
{
	int i = 0;
	int j = matrix.size() - 1;
	while (i<=matrix.size()-1 && j>=0)
	{
		if (target == matrix[i][j])
			return true;


		else
			if (target > matrix[i][j])
			i+=1;
		else
			if (target < matrix[i][j])
			j-=1;


	}
	return false;
	
}
void show(vector<vector<int> >& matrix)
{
    for (unsigned int i = 0; i < matrix.size(); i++)
    {
        for (unsigned int j = 0; j < matrix.size(); j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
}

