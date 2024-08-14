class Solution {
public:
    int ff(vector<int>&v,int l,int r,int t){
        if(l==r)return 0;
        int mid = l+(r-l)/2;
        int a = ff(v,l,mid,t);
        int b = ff(v,mid+1,r,t);
        int ct=a+b;
        for(int i=l;i<=mid;i++){
            auto it1 = upper_bound(v.begin()+mid+1,v.begin()+r+1,v[i]+t);
            if(it1==v.begin()+mid+1)continue;
            it1--;
            if((*it1)<(v[i]-t))continue;
            auto it2 = lower_bound(v.begin()+mid+1,v.begin()+r+1,v[i]-t);
            if(it2==v.begin()+r+1||(*it2)>v[i]+t)continue;
            ct+=(it1-it2+1);
        }
        sort(v.begin()+l,v.begin()+r+1);
        return ct;
    }
    int f(vector<int>v,int t){
       return ff(v,0,v.size()-1,t);
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        int low = 0,high = *max_element(nums.begin(),nums.end())-*min_element(nums.begin(),nums.end()),ans = 0;  
        while(low<=high){
            int mid = low+(high-low)/2; 
            int x = f(nums,mid);  
            if(x<k){
                low = mid+1; 
            }
            else{
                high = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};