class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        int k=nums[n-1];
        for(int i=0;i<n-1;i++){
            count+=k-nums[i];
        }
        return count;
    }
};