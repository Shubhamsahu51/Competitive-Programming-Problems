vector<int> BoundaryElements(vector<vector<int>>&matrix){
        vector<int>ans;
        int R=matrix.size();
        int C=matrix[0].size();
        if (R == 1) {
            for (int i=0;i<C;i++)
                ans.push_back(matrix[0][i]);
        }else if (C == 1) {
            for (int i=0;i<R;i++)
                ans.push_back(matrix[i][0]);
        }else {
            //first row
            for (int i=0;i<C;i++) {
                ans.push_back(matrix[0][i]);
            }
            //last col
            for (int i=1;i<R;i++) {
                ans.push_back(matrix[i][C-1]);
            }
            //last row
            for (int i=C-2;i>=0;i--) {
                ans.push_back(matrix[R-1][i]);
            }
            //first col
            for (int i=R-2;i>=1;i--) {
                ans.push_back(matrix[i][0]);
            }
        }
        return ans;
    }
