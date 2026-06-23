class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd=nums[0];
        for(int i=0;i<nums.size();i++){
                int curProd=1;
            for(int j=i;j<nums.size();j++){
                curProd*=nums[j];
                maxProd=max(curProd,maxProd);
            }
        }
        return maxProd;
    }
};
