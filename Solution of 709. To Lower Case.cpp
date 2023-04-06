//709. To Lower Case SOLUTION IN CPP
class Solution {
public:
    string toLowerCase(string s) {
        string st = "";
        // for(int i =0;i<s.size();i++)
        // {
        //     char x =(char)tolower(s[i]);
        //     st = st +x;
        // }
        for(int i =0;i<s.size();i++){
            int p = s[i];
            if(p>=65 && p<=90){
                int q = p +32;
                char x = char(q);
                st = st+x;
            }
            else{
                st = st + s[i];
            }
        }
        return st;
        
    }
};
