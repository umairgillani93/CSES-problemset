#include <bits/stdc++.h>

using namespace std;

// Create a TreeNode structure
struct TreeNode {
	int data; // value of the tree
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode *root;

void insertNode(struct TreeNode *&node, int value){
	if (node == nullptr) {
		node = new TreeNode();
		node -> left = nullptr;
		node -> right = nullptr;
		node -> data = value;
	}

	else if (value < node -> data) {
		insertNode(node -> left, value);
	}
	else {
		insertNode(node -> right, value);
	}
}

void createTree(vector<int> &arr) {
	root = new TreeNode();
	root -> data = arr[0];
	root -> left = nullptr;
	root -> right = nullptr;

	for (size_t i = 1; i < arr.size(); i++) {
		insertNode(root, arr[i]);
	}
}


void inOrderTraversal(struct TreeNode *node) {
	if (node == nullptr) {
		return;
	}
	inOrderTraversal(node -> left);
	cout << node -> data << '\n';
	inOrderTraversal(node -> right);
}

int main() {
	vector<int> arr = {5, 8, 3, 2, 1};
	createTree(arr);
	inOrderTraversal(root);
	return 0;
}

