class Solution {
public:
    int maxArea(vector<int>& height) {

        // int n = height.size(), maxArea = 0;
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {

        //         if (height[i] < height[j]) {
        //             if (maxArea < height[i] * (j - i)) {
        //                 maxArea = height[i] * (j - i);
        //             }
        //         } else {
        //             if (maxArea < height[i] * (j - i)) {

        //                 maxArea = height[j] * (j - i);
        //             }
        //         }
        //     }
        // }
        // return maxArea;
         int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int currentArea = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};