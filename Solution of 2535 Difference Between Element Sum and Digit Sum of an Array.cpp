//2535 Difference Between Element Sum and Digit Sum of an Array solution
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elsum =0;
        int digsum =0;
        for(int i =0;i<nums.size();i++){
            elsum = elsum + nums[i];
            int dig = nums[i];
            if(nums[i]<=9){
                digsum = digsum +nums[i];
            }
            else if(nums[i]>9){
                while(dig!=0){
                    int temp = dig%10;
                    digsum = digsum + temp;
                    dig = dig/10;
                }
            }
        }
        return abs(digsum-elsum);
        
    }
};
