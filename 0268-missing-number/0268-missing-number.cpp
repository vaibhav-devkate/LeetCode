class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing = -1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++i) {

            if (nums[i] != i) {
                return i;
            }
        }


        if (missing == -1) {
            missing = n;
        }
        return missing;
    }
};