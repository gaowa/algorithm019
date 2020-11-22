long long pre = LLONG_MIN;

bool isValid(TreeNode *root) {
	if(!root) return true;
	if(!isValid(root->left)) return false;
	if(root->val <= pre) return false;
	pre = root->val;
	return isValid(root->right);
}
