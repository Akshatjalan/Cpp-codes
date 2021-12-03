class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxx = INT_MIN;
        int ans =0;
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto &i : mp){
            if(i.second > maxx){
                maxx = i.second;
            }
        }
        
        for(auto &i : mp){
            if(i.second == maxx){
                ans = i.first;
            }
        }
        return ans;
        
    }
};