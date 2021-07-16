Given a string S. The task is to print all permutations of a given string.

 

Example 1:

Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6 
forms as ABC, ACB, BAC, BCA, CAB and CBA .
Example 2:

Input: ABSG
Output:
ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
BASG BGAS BGSA BSAG BSGA GABS GASB 
GBAS GBSA GSAB GSBA SABG SAGB SBAG 
SBGA SGAB SGBA
Explanation:
Given string ABSG has 24 permutations.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function find_permutaion() which takes the string S as input parameter and returns a vector of string in lexicographical order.

 

Expected Time Complexity: O(n! * n)

Expected Space Complexity: O(n)

 

Constraints:
1 <= length of string <= 5

***************************************************************************************************Solution*************************************************

class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    vector <string>v;
		    int n=S.size();
		    sort(S.begin(),S.end());
		    if (n == 0)
             return {};
		    int t=1;
		    while (t) {
		        v.push_back(S);
		        t=next_permutation(S.begin(),S.end());              //next permuation return 1 or 0 and it will store next permutation of string if it exits in same string only
		        
		    }
            return v;
		}
};
