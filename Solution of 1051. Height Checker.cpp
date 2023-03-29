//1051. Height Checker solution
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> expected;
        int count =0;
        // vector <int> given;
        expected = heights;
        sort(expected.begin(),expected.end());
        for(int i =0;i<heights.size();i++){
            if(heights[i]!=expected[i])
            {
                count++;
            }

        }
        return count;

    }
};
