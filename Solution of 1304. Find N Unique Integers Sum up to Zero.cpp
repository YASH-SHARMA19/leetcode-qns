//1304. Find N Unique Integers Sum up to Zero SOLUTION IN CPP;
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec;
        if(n%2!=0){
        for(int i=-n/2;i<=0;i++){
           if(i==0) vec.push_back(0);
            else{
                vec.push_back(i);
                vec.push_back(-i);
                }
            }
        }
        else{
        for(int i=-n/2;i<0;i++){
           if(i==0) vec.push_back(0);
            else{
                vec.push_back(i);
                vec.push_back(-i);
            }
        }

        }
        return vec;
    }
};
