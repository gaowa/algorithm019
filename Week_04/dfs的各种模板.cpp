//二叉树深度优先遍历模板
void dfs(treenode *root){
	if(!root) return;
	visited[root] = true;
	// 处理当前节点
	dfs(root->left);
	dfs(root->right);
} 

// 图或 多叉树的 
void dfs(root){
	if(!root) return;
	visited[root] = true;
	//处理当前节点
	for(遍历当前节点的邻边或者孩子节点) {
		if(!visited[child]) {
			dfs(child);
		}
	} 
}

// 题目中用到的模板
void dfs(int level) 
{
	if(level >= n) {
		//显示结果
		return ; 
	}
	// 处理当前层需要处理的内容
	for(int i = level; i < n; ++i) {
		if(!used[i]){
			used[i] = true;
			// 使用数据
			dfs(level + 1) ;
			// 弹出数据 
			used[i] = false;
		}
	}
}

//非递归 dfs
stack<int > st;
void dfs(root) {
	if(!root) return;
	st.push(root);
	visted[root] = true;
	while(!st.empty()){
		treenode *cur = st.top();st.pop();
		for(cur的邻边 或 孩子节点){
			if(!visited[cur->children])
			{
				visited[cur->children];
				st.push(cur->children);
			}
		} 
	}
}






