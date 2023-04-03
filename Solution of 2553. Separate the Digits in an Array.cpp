// 2553. Separate the Digits in an Array SOLUTION IN CPP;
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector <int> ans;
        vector <int> emp;
        for(int i =0;i<nums.size();i++)
        {
            int p = nums[i];
            while(p!=0)
            {
                int temp = p%10;
                ans.push_back(temp);
                p = p/10;
            }
            while(!ans.empty()){
                int j = ans.back();
                emp.push_back(j);
                ans.pop_back();
            }
        }
        return emp;
    }
};
