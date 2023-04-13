//2114. Maximum Number of Words Found in Sentences SOLUTION IN CPP
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len;
        int mx =0;
        int count =1;
        vector<int> vec;
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            vec.push_back(count);
            count = 1;
        }
        return *max_element(vec.begin(),vec.end());
        
    }
};
