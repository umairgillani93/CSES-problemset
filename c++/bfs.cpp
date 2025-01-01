void dfs(struct TreeNode *node, string path, vector<string> paths) {
	if (node == nullptr) {
		return;
	}


	path += to_string(node -> data);

	if (node -> left != nullptr && node -> right != nullptr) {
		paths.push_back(path);
	}

	else {
		path += "->";
		dfs(node -> left, path, paths);
		dfs(node -> right, path, paths);
	}

	
}

