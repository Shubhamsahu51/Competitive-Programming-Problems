class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        int preInt =0;         // to store previous char value 
        //unordered map for finding interger value for roman numerals
        unordered_map<char, int> math= {{'I', 1}, {'V', 5}, {'X', 10},{'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        // loop from end...starting
        for(int i=s.length()-1; i>=0; i--){
            char ch= s[i];
            int curInt = math[ch];    // store current char integer value
            // value is greater or equal to previous value then increment count i.e., II means 1+1
            //else in case of IV V=5 and I=1 here 1<5 then else part runs and 5-1=4 is the answer
            if(curInt>= preInt)
                count+= curInt;
            else
                count-= curInt;
            preInt=curInt;         // update preInt value with current value for next iteration
        }
        return count;
    }
};
