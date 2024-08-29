
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> mp;
        
        // Step 1: Iterate through the vector to populate the `mp` dictionary.
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        
        vector<vector<int>> containers(n + 1);
        
        // Step 2: Iterate through the `mp` dictionary and distribute elements into the corresponding buckets based on their frequency.
        for (auto it = mp.begin(); it != mp.end(); it++) {
            containers[it->second].push_back(it->first);
        }
        
        vector<int> ans;
        
        // Step 3: Iterate through the buckets from right to left (highest to lowest frequency) and append elements to the answer list until the desired k elements are collected.
        for (int i = n; i >= 0; i--) {
            if (ans.size() >= k) {
                break;
            }
            if (!containers[i].empty()) {
                ans.insert(ans.end(), containers[i].begin(), containers[i].end());
            }
        }
        
        return ans;
    }
};