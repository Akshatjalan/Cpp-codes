class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        int prev=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=prev)
            {
                nums[k]=nums[i];
                k++;
                prev=nums[i];
            }
        }
        return k;
    }
};