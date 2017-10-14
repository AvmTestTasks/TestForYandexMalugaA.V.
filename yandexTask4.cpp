/*
TASK4

 Given  a  binary t ree,  determite if it is  height-balanced.
 For this  problem,  a  height-balanced binary tree i s  defined  as
 a  binary tree  which the  depth  of the two  subtrees  of  every  node never  differ  by  more then  1.

 Use following  data  structure  and function  structure:

 struct  TreeNode
 {
    int  data;
    TreeNode * left;
    TreeNode * right; TreeNode(int  x) : data(x), left(nullptr), right(nullptr){}
};
 
 bool task4(TreeNode * root);
 
 */
#include <iostream>
#include <queue>

using namespace std;


struct TreeNode
{
	int data;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :data(x), left(nullptr), right(nullptr){}
};

int balanceHeight(TreeNode *root)
{
	if (root == NULL)
		return 0;
	int leftHeight = balanceHeight(root->left);
	if (leftHeight == -1)
	{
		return -1;
	}
	int rightHeight = balanceHeight(root->right);
	if (rightHeight == -1)
		return -1;
	if (abs(leftHeight - rightHeight) > 1)
		return -1;

	return (1 + max(leftHeight, rightHeight));
}

bool task4(TreeNode *root)
{
	if (balanceHeight(root) > -1)
		return true;
	else
		return false;
	
}


int  main()
{
	/*******NOT Height balanced tree**********

	                     1
				    2         3
	              4   5     6  
	            7
	          8

	***********************************/
	
	TreeNode* troot = new TreeNode(1);

	TreeNode* tnode2 = new TreeNode(2);
	TreeNode* tnode3 = new TreeNode(3);
	TreeNode* tnode4 = new TreeNode(4);

	TreeNode* tnode5 = new TreeNode(5);
	TreeNode* tnode6 = new TreeNode(6);
	TreeNode* tnode7 = new TreeNode(7);
	TreeNode* tnode8 = new TreeNode(8);

	
	troot->left = tnode2;
	troot->right = tnode3;
	troot->left->left = tnode4;
	troot->left->right = tnode5;
	troot->right->left = tnode6;
	troot->left->left->left = tnode7;
	troot->left->left->left->left = tnode8;

	

	cout << task4(troot) << endl;

	
	/*
	******Height balanced tree**********

                     1
                2         3
              4  5      6 
            7

   **********************************
   */
	TreeNode* root = new TreeNode(1);

	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(3);
	TreeNode* node4 = new TreeNode(4);

	TreeNode* node5 = new TreeNode(5);
	TreeNode* node6 = new TreeNode(6);
	TreeNode* node7 = new TreeNode(7);

	

	

	root->left = node2;
	root->left->right = node5;
	root->right = node3;
	root->right->left = node6;
	root->left->left = node4;
	root->left->left->left = node7;

	cout << task4(root) << endl;

	

	system("pause");
	return 0;
}


