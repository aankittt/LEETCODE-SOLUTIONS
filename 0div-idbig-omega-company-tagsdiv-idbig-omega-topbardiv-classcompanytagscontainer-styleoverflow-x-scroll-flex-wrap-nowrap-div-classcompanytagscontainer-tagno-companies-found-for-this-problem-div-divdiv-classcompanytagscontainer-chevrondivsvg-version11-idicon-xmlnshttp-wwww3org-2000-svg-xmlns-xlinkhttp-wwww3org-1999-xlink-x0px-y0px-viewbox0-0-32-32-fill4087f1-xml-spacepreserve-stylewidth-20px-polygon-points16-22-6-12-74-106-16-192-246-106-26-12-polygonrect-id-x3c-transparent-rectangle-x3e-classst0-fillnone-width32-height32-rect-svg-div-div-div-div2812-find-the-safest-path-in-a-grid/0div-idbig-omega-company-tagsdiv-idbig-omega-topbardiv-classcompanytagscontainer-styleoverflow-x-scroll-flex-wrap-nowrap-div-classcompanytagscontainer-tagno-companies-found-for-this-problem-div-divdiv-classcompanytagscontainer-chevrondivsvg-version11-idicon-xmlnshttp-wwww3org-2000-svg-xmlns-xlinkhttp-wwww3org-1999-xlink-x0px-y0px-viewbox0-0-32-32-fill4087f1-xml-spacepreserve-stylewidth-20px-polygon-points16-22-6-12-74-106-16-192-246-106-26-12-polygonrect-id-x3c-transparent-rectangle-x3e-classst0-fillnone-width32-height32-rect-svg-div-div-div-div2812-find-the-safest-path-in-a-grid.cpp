class Solution {
    bool ispossible(int safetyFactor, vector<vector<int>> &thiefDist) {
        int n = thiefDist.size();
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        queue<pair<int, int>> q;
        if (thiefDist[0][0] < safetyFactor)
            return false;
        q.push({0, 0});
        vis[0][0] = true;
        
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            if (x == n-1 && y == n-1) 
                return true;

            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    if (i != 0 && j != 0) continue;
                    int nrow = i + x;
                    int ncol = j + y;
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && !vis[nrow][ncol] && thiefDist[nrow][ncol] >= safetyFactor) {
                        vis[nrow][ncol] = true;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
        return false;
    }

public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> temp(n, vector<int>(n, 0));
        vector<vector<int>> vis(n, vector<int>(n, -1));
        queue<pair<int, int>> q;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }

        int distance = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                temp[row][col] = distance;

                for (int i = -1; i <= 1; i++) {
                    for (int j = -1; j <= 1; j++) {
                        if (i != 0 && j != 0) continue;
                        

                        int nrow = row + i;
                        int ncol = col + j;

                        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && vis[nrow][ncol] == -1) {
                            vis[nrow][ncol] = 1;
                            q.push({nrow, ncol});
                        }
                    }
                }
            }
            distance++;
        }

        int left = 0, right = distance, result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (ispossible(mid, temp)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};
