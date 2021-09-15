class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
      long long int ans=0;
        int num=x;
        while(x!=0)
        {
            ans = (ans * 10)+(x % 10);
            x=x/10;
        }
        if(num==ans)
            return true;
        else
            return false;
    }  
};