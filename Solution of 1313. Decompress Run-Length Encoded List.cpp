//1313. Decompress Run-Length Encoded List solution
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> rslt;
        for(int i =0;i<nums.size()-1;i+=2)
        {
            int t = nums[i];
            while(t--){
                rslt.push_back(nums[i+1]);
            }
        }
        return rslt;
    }
};
