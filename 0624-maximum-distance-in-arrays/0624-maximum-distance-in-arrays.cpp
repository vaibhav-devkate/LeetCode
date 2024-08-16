class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxDif = 0, curMin = 10000, curMax = -10000;
        for (auto& a : arrays) {
            maxDif = max(maxDif, max(a.back()-curMin, curMax-a.front()));
            curMin = min(curMin, a.front()), curMax = max(curMax, a.back());
        }
        return maxDif; 
    }
};
auto init = []() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    cout.tie(nullptr);
    return 'c';
}();
