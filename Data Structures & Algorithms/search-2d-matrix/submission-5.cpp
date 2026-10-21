class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int r=m-1, c=0;

        while(r>=0 && c<n){
            if(target>matrix[r][c]){
                c++;
            }
            else if(target<matrix[r][c]){
                r--;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
