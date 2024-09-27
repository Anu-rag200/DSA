class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int majority = n/3;
        for(auto it : mp){
            if(it.second > majority){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};