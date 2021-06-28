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
using character array:-
#include<bits/stdc++.h>
using namespace std;
void allsubsequence(char*input,char*output,int i,int j) {
    //base case
    if (input[i]=='\0') {
        output[j]='\0';
        cout<<output<<" ";
        return;
    }
    //include that character
    output[j]=input[i];
    allsubsequence(input,output,i+1,j+1);
    //exclude that character
    allsubsequence(input,output,i+1,j);
} 
int main () {
    char in[]="abc";
    char out[10];
    allsubsequence(in,out,0,0);
    return 0;
}
