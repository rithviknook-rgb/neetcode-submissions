class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp; // value -> frequency in window
        int L = 0;

        for (int R = 0; R < nums.size(); R++) {
            if (R - L > k) {
                mp.erase(nums[L]);

                L++;
            }

            if (mp.count(nums[R])) {
                return true;
            }

            mp[nums[R]]++;
        }

        return false;
    }
};