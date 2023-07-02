//Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        vector<vector<int>>bucket(n+1);
        unordered_map<int,int>mp;
        for(auto num: nums){
            mp[num]++;
        }
        for(auto p: mp){
            bucket[p.second].push_back(p.first);
        }
        for(int i = 0; i<n; i++){
            for(auto x : bucket[n-i]){
                if(ans.size()==k) return ans;
                ans.push_back(x);
            }
        }
        return ans;
    }
};
