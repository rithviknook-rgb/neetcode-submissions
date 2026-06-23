class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSum=nums[0];
        for(int i=0;i<nums.size();i++){
                int curSum=1;
            for(int j=i;j<nums.size();j++){
                curSum*=nums[j];
                maxSum=max(curSum,maxSum);
            }
        }
        return maxSum;
    }
};
