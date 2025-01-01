#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode *right;

};

struct TreeNode *root;

void insertNode(struct TreeNode *&node, int val) {
	if (node == nullptr) {
		node = new TreeNode();
		node -> data = val;
		node -> left = nullptr;
		node -> right = nullptr;
	}
	else if (val < node -> data) {
		insertNode(node -> left, val);
	}
	else {
		insertNode(node -> right, val);
	}
}

void createTree(vector<int> &arr) {
	root = new TreeNode();
	root -> data = arr[0];
	root -> left = nullptr;
	root -> right = nullptr;

	for (int i = 1; i < arr.size(); i++) {
		insertNode(root, arr[i]);
	}
}

void inOrderTraversal(struct TreeNode *node) {
	// inOrderTraversal first prints left, then root than right
	if (node == nullptr) {
		return;
	}
	inOrderTraversal(node -> left);
	cout << node -> data << '\n';
	inOrderTraversal(node -> right);
}

void dfs(struct TreeNode *node) {
	if (node == nullptr) {
		return;
	}
	cout << node -> data << '\n';
	dfs(node -> left);
	dfs(node -> right);
}

int main() {
	vector<int> arr = {5,2,4,0,1,6};
	createTree(arr);
	//inOrderTraversal(root);
	dfs(root);
	
	return 0;
}
