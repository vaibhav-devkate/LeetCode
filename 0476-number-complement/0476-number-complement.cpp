class Solution {
public:
    int findComplement(int num) {
         if (num == 0) return 1;
        
        unsigned int mask = ~0;
        
        while (num & mask) {
            mask <<= 1;
        }
        
        return ~mask & ~num;
    }
};
auto init = []() {

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    cout.tie(nullptr);
    return 'c';
}();