//1920. Build Array from Permutation solution 
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> rslt;
        for(int i =0;i<nums.size();i++){
            int ele = nums[i];
            rslt.push_back(nums[ele]);
        }
        return rslt;
        
    }
};
