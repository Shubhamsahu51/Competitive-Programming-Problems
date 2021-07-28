class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>ans;                     //for storing BFS
	    bool visited[V];                    //for vertex whether its is visited or not
	    for (int i=0;i<V;i++) {
	        visited[i]=false;
	    }
	    queue<int>q;
	    q.push(0);                         //push source vertex 1st in queue
	    while (!q.empty()) {
	        int u=q.front();
	        q.pop();
	        ans.push_back(u);
	        for (int v:adj[u]) {
	            if (visited[v]==false) {
	                visited[v]=true;
	                q.push(v);
	            }
	        }
	    }
	    return ans;
	}
};
