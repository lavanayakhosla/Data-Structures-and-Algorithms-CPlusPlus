class Solution {
public:
    int minAddToMakeValid(string s) {
       int openBrackets = 0;
       int minAddRequired = 0;
       for(int i =0;i<s.size();i++){
        if (s[i]=='(')
            openBrackets++;
        else{
            if(openBrackets>0)
                 openBrackets--;
            else 
                 minAddRequired++;
        }
       }
            
        return openBrackets + minAddRequired;
    }
};
