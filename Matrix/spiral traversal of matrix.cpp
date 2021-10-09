class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r=matrix.size();
        int c=matrix[0].size();
        
        int top=0,bottom=r-1,left=0,right=c-1;
        
        while (top<=bottom and left<=right) 
        {
            for (int i=left;i<=right;i++) 
                ans.push_back(matrix[top][i]);
            
            top++;
            
            if (top>bottom)
                break;
          
            for (int i=top;i<=bottom;i++)
                ans.push_back(matrix[i][right]);
            
            right--;
            
            if (right<left)
                break;
            
            for (int i=right;i>=left;i--)
                ans.push_back(matrix[bottom][i]);
            
            bottom--;
            
            if (bottom <top)
                break;
            
            for (int i=bottom;i>=top;i--)
                ans.push_back(matrix[i][left]);
            
            left++;
            if (left >right)
                break;
            
        }
        return ans;
    }
    
};
