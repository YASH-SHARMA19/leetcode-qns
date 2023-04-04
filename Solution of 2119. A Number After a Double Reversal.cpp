//2119. A Number After a Double Reversal SOLUTION IN CPP
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num ==0){
            return true;
        }
        else if(num%10 == 0){
        // if num is divided by 10 then it will obviously have 0 in the end and if we reverse it then the no will change like 100 to 1 in reverse and 180 to 18;
            return false;
        }
        
     return true;   
    }
    
};
