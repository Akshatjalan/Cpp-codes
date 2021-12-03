class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i=0; i<s.length(); i++){
                s[i] = tolower(s[i]);
            }
        string str = "";
        for(int i = 0 ; i < s.length() ; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                str += s[i];
            }
        }
        
        for(int i=0; i<str.length(); i++){
            cout<<str[i];
        }
        
        for (int i=0, j=str.length()-1; i<j; i++,j--){
                if(str[i] != str[j]){
                    return false;
                }
            }
    return true;
    }
};