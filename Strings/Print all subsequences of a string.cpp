#include <bits/stdc++.h>
using namespace std;

void subseq(string ip,string op) {
    if (ip.length()==0) {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    subseq(ip,op1);
    subseq(ip,op2);
    return;
}

int main() {
    string ip;
    cin>>ip;
    string op=" ";                           //initialise output
    subseq(ip,op);
	return 0;
}
using g4g approach(reducing code work):-
void printSubsequence(string input, string output)
{
    // Base Case
    // if the input is empty print the output string
    if (input.empty()) {
        cout << output << endl;
        return;
    }
 
    // output is passed with including
    // the Ist characther of
    // Input string
    printSubsequence(input.substr(1), output + input[0]);
 
    // output is passed without
    // including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output);
}
