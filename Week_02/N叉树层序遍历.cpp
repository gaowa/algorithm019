#include <bits/stdc++.h> 
using namespace std;
struct Node{
	int val;
	vector<Node *> children;
};

vector<vector<int >> Nlevelorder(Node * root)
{
	vector<vector<int >> res;
	queue<Node *> q;
	if(!root) return res;
	q.push(root);
	while(!q.empty())
	{
		vector<int > rr;
		for(int i = 0; i < q.size(); ++i) //分层显示 i = 0为第一层 
		{
			Node * cur = q.front();q.pop();
			
			rr.push_back(cur->val);
			for(int j = 0; j < cur->children.size(); ++j)
			{
				if(cur->children[j]) q.push(cur->children[j]);
			}
		}
		res.push_back(rr);
	} 
}
int main()
{
	
	return 0;
}
