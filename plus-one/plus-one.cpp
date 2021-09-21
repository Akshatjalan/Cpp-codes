class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n = digits.size();
    int sum = 0;
    int r = 1;
    
    for(int i=n-1 ; i>=0 ; i--)
    {
        sum = digits[i]+r;
        digits[i] = sum%10;
        r = sum/10;
    }
    
    if(r)
    {
        digits.push_back(r);
        for(int i=n ; i>0 ; i-- ) digits[i] = digits[i-1];
        digits[0] = r;
    }
    
    return digits;
}
};