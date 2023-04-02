//2520. Count the Digits That Divide a Number SOLUTION IN CPP
class Solution {
public:
    int countDigits(int num) {
        int ans =0;
        int real = num;
        while(num!=0){
            int temp = num%10;
            if(real%temp==0){
                ans++;
            }
            num = num/10;
        }
        
        return ans;
    }
};
