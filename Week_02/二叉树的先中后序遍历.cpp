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
	cout << root->val;//������� 
	inorder(root->right);
	
}
void postorder(treenode* root)
{
	if(root == NULL) return;
	postorder(root->left);	
	postorder(root->right);
	cout << root->val;//������� 	
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
