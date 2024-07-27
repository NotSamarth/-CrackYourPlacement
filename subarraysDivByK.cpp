class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> preRem(nums.size());
        preRem[0] = (nums[0]%k + k)%k;
        for(int i=1;i<nums.size();i++) {
            preRem[i]= (preRem[i-1] + nums[i])%k;
            preRem[i] = (preRem[i]+k)%k;
        }
        unordered_map<int,int>mp;
        mp[0] = 1;
        int ans=0;
        for(int i=0;i<nums.size();i++) {
            ans+= mp[preRem[i]];
            mp[preRem[i]]++;
        }
        return ans;

    }
};