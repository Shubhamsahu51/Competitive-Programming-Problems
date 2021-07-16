string removeDuplicates(string a) {
	stack<char> st;
	string ans="";
	for(auto curr:a) {
		if(st.empty()) st.push(curr);
		else if(st.top() == curr) st.pop();
		else st.push(curr);
	}

	while(!st.empty()) {
		ans += st.top();
		st.pop();
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

Approach:-
  If the stack is empty push curr into the stack.
else if the stack top is same as curr, pop the stack once.
else push curr into the stack.

Finally the elements in the stack is the answer in reverse order.

Try understanding with input :cabba

curr=c: stack=[c
curr=a: stack=[ca
curr=b: stack=[cab
curr=b: stack=[ca
curr=a: stack=[c

ans:c
