class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> megaSet;
        for(int num:nums){
            if (megaSet.count(num)){
                return true;
            }
            megaSet.insert(num);
        }
        return false;
    }
};