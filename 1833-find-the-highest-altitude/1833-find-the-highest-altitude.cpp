class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt= INT_MIN, currentGain=0;
        for(int i =0;i<gain.size();i++){
            currentGain += gain[i];
            maxAlt= max(maxAlt, currentGain);
        }

        if(maxAlt<0)return 0;
        return maxAlt;
    }
};