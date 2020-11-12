#include <bits/stdc++.h>
using namespace std;
struct treenode{
	int val;
	treenode* next; 
};
void inorder(treenode* root)
{
	if(root == NULL) return;
	inorder(root->left);
	cout << root->val;//中序遍历 
	inorder(root->right);
	
}
void postorder(treenode* root)
{
	if(root == NULL) return;
	postorder(root->left);	
	postorder(root->right);
	cout << root->val;//后序遍历 	
}
void preorder(treenode * root) 
{
	if(root == NULL) return;
	cout << root->val;
	preorder(root->left);
	preorder(root->right);
}
int main()
{	
	return 0;
}
