#include<iostream>
#include<string>

using namespace std;

struct TreeNode
{
	struct TreeNode* left;
	struct TreeNode* right;
	string  elem;
};

void fun(string *inorder, string *preorder, int length)
{
	if(length == 0)
		return;
	TreeNode* node = new TreeNode;
	node->elem = *preorder;
	int rootIndex = 0;
	for(; rootIndex < length; rootIndex++)
	{
		if(inorder[rootIndex] == *preorder)
			break;
	}
	fun(inorder, preorder +1, rootIndex);
	fun(inorder + rootIndex + 1, preorder + rootIndex + 1, length - (rootIndex + 1));
	cout<<node->elem<<endl;
	delete node;
	return;
}


int main()
{
	string pr;
	string in;
	while(cin>>in>>pr)
	{
		fun(&in, &pr, pr.length());
		cout<<endl;
	}
	return 0;
}
