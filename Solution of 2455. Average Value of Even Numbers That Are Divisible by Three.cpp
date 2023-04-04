// 2455. Average Value of Even Numbers That Are Divisible by Three SOLUTION IN CPP
class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        int count =0;
        vector <int> vec;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0 && nums[i]%3==0){
                vec.push_back(nums[i]);
                count++;
            }
        }
        int sum = accumulate(vec.begin(),vec.end(),0);
        if(count==0){
            return count;
        }
        else{
            return sum/count;
        }
    }
};
