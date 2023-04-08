//771. Jewels and Stones Solution in cpp
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        vector<char> vec;
        for(int i =0;i<jewels.size();i++){
            char s = jewels[i];
            vec.push_back(s);

        }
        for(int i=0;i<stones.size();i++){
            for(int j =0;j<vec.size();j++){
                if(stones[i]==vec[j]){
                    count++;
                    break;
                }
            }
        }
        return count;
        
    }
};
