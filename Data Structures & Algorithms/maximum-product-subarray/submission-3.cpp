class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // if(nums.size()==0){
        //     return 0;
        // }

        int mn=nums[0];
        int mx=nums[0];
        int result=mx;

        for(int i=1;i<nums.size();i++){
            int cur=nums[i];
            int temp=max(cur, max(mx*cur,mn*cur));
            mn=min(cur, min(mx*cur,mn*cur));
            mx=temp;

            result=max(result,mx);
        }
        return result;
    }
};
