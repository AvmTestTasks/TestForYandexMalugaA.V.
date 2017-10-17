# TestForYandexMalugaA.V.


TASK1

Find the kth largest element in an unsorted array. Note that is the kth largest element in the sorted order, not the kth distinct element.

For example:
Given [3,2,1,5,6,4] and k=2, return 5.
Note: You may assume k is always valid, 1<=k<=arrays length.
Use the following signature: int task1(vector<int>& nums, int k);

TASK2

Write an efficient algorithm that searches for a value in a MxN matrix. This matrix has the following properties:
- integers in each row are sorted in ascending from left to right;
- integers in each column are sorted in ascending from top to bottom;

For example:

1 4 7 11 15
2 5 8 12 19
3 6 9 16 22
10 13 14 17 24
18 21 23 26 30

Given target=5, return true.
Given target=20, return false.

Use following signature:
bool task2(vector< vector<int> >& matrix, int target);
  
TASK3

Given a string which contains only lowercase letters, remove duplicate letters so that every letter appear once and only once.
You must make sure your result is the smallest in lexicographical order among all posible results.
Example:
Given "bcabc" return "abc"
Given "cbacdcbc" return "abcd"
Use following signature: string task3(string s);

TASK4

Given a binary tree, determite if it is height-balanced. For this problem, a height-balanced binary tree is defined as a binary tree which the depth of the two subtrees of every node never differ by more then 1.
Use following data structure and function structure:

struct TreeNode
{
	int data;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :data(x), left(nullptr), right(nullptr){}
};

bool task4(TreeNode *root);


TASK5

Given N points on a 2D plane, find the maximum number of points that lie on the same straight line.
Use following data structure and function signature:
struct Point
{
	int x;
	int y;
	Point() :x(0), y(0){}
	Point(int a, int b) :x(a), y(b){}
};

int task5(vector<Point>& points);


