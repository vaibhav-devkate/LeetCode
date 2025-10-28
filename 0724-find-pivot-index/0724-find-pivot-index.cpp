class Solution {
public:
    int sumation(int left, int right, vector<int>& nums) {
        if (left > right)
            return 0;

                if (left == right)
            return nums[left];


        int n = left - right + 1;
        int sum1 = 0;
        for (int i = left; i <=right; i++) {
            sum1 += nums[i];
        }
        return sum1;
    }
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int sumRight = sumation(i + 1, n-1, nums);
            int sumLeft = sumation(0, i - 1, nums);
            cout<<" i"<<i<<" "<<"R "<<sumRight<<" L "<<sumLeft;
            if (sumRight == sumLeft) {
                return i;
            }
        }
        return -1;
    }
};