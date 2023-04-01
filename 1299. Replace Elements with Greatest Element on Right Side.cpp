//1299. Replace Elements with Greatest Element on Right Side partial soln;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector <int> rslt;
        int mx =0;
        vector <int> one;
        one.push_back(-1);
        int sz = arr.size();
        if(sz==1){
            return one;
        }
        else{

        for(int i=0;i<arr.size();i++)
        {
            for(int j =i+1;j<arr.size();j++){
                mx = max(arr[j],mx);
            }
            
            rslt.push_back(mx);
            mx =0;

        }
        }
        rslt.pop_back();
        rslt.push_back(-1);
        return rslt;
    }
};
