class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int carry =1;
        int sum = 0;
        for (int i = digits.size()-1 ; i>=0 ;i--) {
            sum = digits[i] + carry;
            ans.push_back(sum % 10);
            carry = sum/10;
        }
        if (carry > 0)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
