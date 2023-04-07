//2315. Count Asterisks SOLUTION IN CPP
class Solution {
public:
    int countAsterisks(string s) {
        int count =0;
        int ast= 0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='|'){
           count++;
       }
       else if(count%2==0){
           if(s[i]=='*'){
               ast++;
           }
       }
       
    }
    return ast;
    
    }
};
