class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxh=0;
        int left=0, right=heights.size()-1;

        while(left<right){
            int width=right-left;
            int area=min(heights[left],heights[right])*width;
            maxh=max(maxh,area);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxh;
    }
};
