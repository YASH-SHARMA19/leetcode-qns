//507. Perfect Number SOLUTION IN CPP;
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum =0;
        if(num==1){
            return false;
        }
        for(int i =1;i<=sqrt(num);i++){
            if(num%i==0){
                if(i!=1){int a = num/i;
                sum = sum+a;
                sum = sum+i;
                }
                else{
                    sum++;
                }
                
            }
        }
        if(num==sum){
            return true;
        }
        
        else {
            return false;
        }

        
    }
};
