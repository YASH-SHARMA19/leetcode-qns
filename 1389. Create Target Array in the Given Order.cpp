//1389. Create Target Array in the Given Order SOLUTION IN CPP

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector <int> target;
        for(int i=0;i<nums.size();i++){
            int p = index[i];
            int val = nums[i];
            target.insert(target.begin() + p , val);
        }
        return target;
    }
};
