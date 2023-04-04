//412. Fizz Buzz SOLUTION IN CPP;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> vec;
        string s="";
        for(int i=1;i<=n;i++){
            if(i%3!=0 && i%5!=0){
                string p = to_string(i);
                vec.push_back(p);
            }
            else if (i%3==0 && i%5!=0){
                string fi = "Fizz";
                vec.push_back(fi);
            }
            else if (i%5==0 && i%3!=0){
                string bu = "Buzz";
                vec.push_back(bu);
            }
            else if (i%3==0 && i%5==0){
                string fibu = "FizzBuzz";
                vec.push_back(fibu);
            }
        }
        return vec;
        
    }
};
