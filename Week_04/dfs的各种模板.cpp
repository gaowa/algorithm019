//������������ȱ���ģ��
void dfs(treenode *root){
	if(!root) return;
	visited[root] = true;
	// ����ǰ�ڵ�
	dfs(root->left);
	dfs(root->right);
} 

// ͼ�� ������� 
void dfs(root){
	if(!root) return;
	visited[root] = true;
	//����ǰ�ڵ�
	for(������ǰ�ڵ���ڱ߻��ߺ��ӽڵ�) {
		if(!visited[child]) {
			dfs(child);
		}
	} 
}

// ��Ŀ���õ���ģ��
void dfs(int level) 
{
	if(level >= n) {
		//��ʾ���
		return ; 
	}
	// ����ǰ����Ҫ���������
	for(int i = level; i < n; ++i) {
		if(!used[i]){
			used[i] = true;
			// ʹ������
			dfs(level + 1) ;
			// �������� 
			used[i] = false;
		}
	}
}

//�ǵݹ� dfs
stack<int > st;
void dfs(root) {
	if(!root) return;
	st.push(root);
	visted[root] = true;
	while(!st.empty()){
		treenode *cur = st.top();st.pop();
		for(cur���ڱ� �� ���ӽڵ�){
			if(!visited[cur->children])
			{
				visited[cur->children];
				st.push(cur->children);
			}
		} 
	}
}






