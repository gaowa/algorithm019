#include <bits/stdc++.h> 
using namespace std;
struct Node{
	int val;
	vector<Node *> children; 
};
void pre(Node* root, vector<int >& res) 
{
	if(!root) return;
	res.push_back(root->val);
	for(int i = 0; i < root->children.size(); ++i) pre(root->children[i], res);
}
void post(Node* root, vector<int > &res)
{
	if(!root) return;
	for(int i = 0; i < root->children.size(); ++i) post(root->children[i], res);
	res.push_back(root->val);
}
vector<int > preorder(Node *root)
{
	vector<int > res;
	//pre(root, res);
	post(root, res);
	return res;
}
int main()
{
	
	return 0;
}
