class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int currsum = 0;
        mp[0] = 1;
        int result = 0;
        for(int i = 0;i<n;i++){
            currsum+=nums[i];
            if(mp.find(currsum-k)!=mp.end()){
                result+=mp[currsum-k];
            }
            mp[currsum]++;
        }
        return result;
    }
};