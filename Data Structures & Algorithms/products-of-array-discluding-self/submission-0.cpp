class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);

        int pre=1,post=1;

        for(int i=0;i<nums.size();i++){
            result[i]=pre;
            pre=nums[i]*pre;
        }

        for(int i=nums.size()-1;i>=0;i--){
            result[i]=post*result[i];
            post=nums[i]*post;

        }
        return result;
    }
};
