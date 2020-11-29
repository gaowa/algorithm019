	bfsÄ£°å
	void bfs(TreeNode *root){
		queue<int > q;
		q.push(root);
		while(!q.empty()){
			int cur_size = q.size();
			for(int i = 0; i < cur_size; ++i) {
				TreeNode *cur = q.front(); q.pop(); 
				for(curµÄchild or ÁÚ±ß !visited[cur_child]){
					q.push(cur.child);
					visited[cur.child] = 1;
				 
			}
		}
	} 
	
	bfs ¶þ²æÊ÷ 
	void bfs(TreenNode* root){
		queue<int> q;
		q.push(root);
		while(!q.empty()){
			TreeNode *cur = q.front(); q.pop();
			
			if(cur->left) q.push(cur->left);
			if(cur->right) q.push(cur->right);
		}
	}
	 
