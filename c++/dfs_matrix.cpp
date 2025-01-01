#include <bits/stdc++.h>

using namespace std;


// we need to find the distinct set of 1's on grid
// for this we'll be using dfs recursivly 

vector<vector<int>> directions = {
	{-1, 0}, // up
	{1, 0}, // down
	{0, 1}, // right
	{0, -1} // left}
	};

void dfs(vector<vector<int>> &matrix, int i, int j, vector<vector<bool>> &visited) {
	if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[0].size() || visited[i][j] || matrix[i][j] == 0) {
		return;
	}

	visited[i][j] = true;

	for (int d = 0; d < 4; d++) {
		int row = i + directions[d][0];
		int col = j + directions[d][1];
		dfs(matrix, row, col, visited);
	}
}


int main() {
	vector<vector<int>> matrix = {
    {1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1},
    {0, 0, 0, 1, 1},
    {0, 0, 1, 1, 0},
    {1, 0, 0, 0, 1}
	};

	int row = matrix.size();
	int col = matrix[0].size();

	vector<vector<bool>> visited(row, vector<bool>(col, false));
	int ans = 0;


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (matrix[i][j] == 1 && !visited[i][j]) {
				ans++;
				dfs(matrix, i, j, visited);
			}
		}
	}
	cout << ans << '\n';

	return 0;

}
