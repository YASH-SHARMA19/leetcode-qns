//2525. Categorize Box According to Criteria SOLUTION IN CPP;
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
      long long vol = (long long ) length * (long long) width * (long long) height;
        if(length >=10000 ||width >=10000 || height >=10000 || mass >=10000 || vol>=1000000000){
            if(mass>=100){
                return "Both";
            }
            else{
                return "Bulky";
            }
        }
        else if(mass>=100){
            return "Heavy";
        }
        else{
            return "Neither";
        }
        
    }
};
