第二周学习笔记
1、哈希表的应用增 unordered_map的键值对的应用
	增加：O(1)  m.insert(make_pair(n1, n2))
	删除：O(1) 
	查找：O(1)  m.count(n2)  m.find() 返回迭代器
	熟悉哈希表的 api 
	应用：记录元素出现的个数
2、树（核心 递归定义一棵树）	
	二叉树
	n叉树	
	二叉搜索树
	平衡树（AVL)
	AVL树是最先发明的自平衡二叉查找树。在AVL树中任何节点的两个子树的高度最大差别为一，所以它也被称为高度平衡树。查找、插入和删除在平均和最坏情况下都是 O(log n)。增加和删除可能需要通过一次或多次树旋转来重新平衡这个树。	节点的平衡因子是它的左子树的高度减去它的右子树的高度（有时相反）。带有平衡因子1、0或-1的节点被认为是平衡的。带有平衡因子-2或2的节点被认为是不平衡的，并需要重新平衡这个树。平衡因子可以直接存储在每个节点中，或从可能存储在节点中的子树高度计算出来。
	
	红黑树（set  和 map 的内部结构）
	特性：
	1、树根始终为黑色
	2、外部节点均为黑色
	3、其余节点若为红色，则其孩子节点必为黑色
	4、从任一外部节点到根节点的沿途，黑节点的数目相等
	树的遍历
	先序 root left right
		preorder(root){
			if(root == NULL) return;
			//root
			preorder(root->left);
			preorder(root->right);
		}
	中序 left  root right
		inorder(root){
			if(root == NULL) return;
			inorder(root->left);
			//root
			inorder(root->right);
		}
	后序 left right root
		postorder(root){
			if(root == NULL) return;
			postorder(root->left);
			postorder(root->right);
			// root
		}
	层序遍历
		queue< > q;
		levelorder(root){
			q.push(root);
			while(!q.empty()){
				int cur = q.top(); q.pop();
				if(!cur->left) q.push(cur->left);
				if(!cur->right) q.push(cur->right);
			}
		}
	深度优先遍历模板
	void dfs(){
		for()// 遍历几个方向
		{
			if(没有visit && 新坐标在行列范围内) {
				visited[] = true;
				dfs();
			} 
		} 
	}
	广度优先遍历模板
	queue< > q;
	void bfs(){
		q.push();// 当前坐标入队
		while(!q.empty())// 当前队列不空
		{
			int cur = q.top(); q.pop();
			for(每个visit && 新坐标在行列范围内){
				visit = true;
				q.push(新坐标);
			}
		}
	}
3、图
	存储方式 邻接矩阵 邻接表（使用多）
	深搜 广搜 visited
	最短路径 dijstra  优先队列 优化
	priority_queue< pair<int, int> , vector<pair<int, int> >, greater<pair<int, int> > > q;
	void dijkstra_1(int s) 
	{
		dis[s]= 0;  // s = 0 
		pre[s] = s;
		q.push(make_pair(0, s));// first 权 second边 
		while(!q.empty()) 
		{
			// 1、找到当前没有访问的最短路径节点   s是我们的原点 
			
			int cur = q.top().second; q.pop();
			if(visited[cur]) continue;// q中有多个同样的顶点		
			visited[cur]  = true;
			// 3、根据这个节点的最短路大小，更新其他节点的路径长度
			// 找到 cur  这个节点的相邻节点 
			for(int i = 0; i < g1.g[cur].size(); ++i) 
			{
				if(!visited[g1.g[cur][i].second])
				{
					if(dis[cur] + g1.g[cur][i].first < dis[g1.g[cur][i].second]) 
					{
						dis[g1.g[cur][i].second] = dis[cur] + g1.g[cur][i].first;
						q.push(make_pair(dis[g1.g[cur][i].second], g1.g[cur][i].second ));// 跟新的 
						pre[g1.g[cur][i].second ] = cur;
					}
				} 
			}	
		}	
	} 
	拓扑排序
	
	最小生成树
		void kurskal(){
		for(int i = 1 ; i < n ; ++i) pa[i] = i;
		stable_sort(a + 1 , a + m + 1 , cmp);
		int cnt = 0;
		for(int i = 1 ; i <= m ; ++i){
			int x = find(a[i].u);
			int y = find(a[i].v);
			if(x != y){
				pa[x] = y;
				cnt++;
				weight += a[i].w;
			}
			if(cnt == n - 1) return;
		}
	}
	
