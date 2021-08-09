class Solution 
{
    public:
    void DFSRec(vector<int>adj[],int s,bool visited[],vector<int>&ans) {
        visited[s]=true;
        ans.push_back(s);
        for (auto x : adj[s])
        {
            if (visited[x]==false)
            DFSRec(adj,x,visited,ans);
        }
            
        
        
    }
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    bool visited[V];
	    vector<int>ans;
	    for (int i=0;i<V;i++) {
	        visited[i]=false;
	    }
	    for (int i=0;i<V;i++) {
	        if (visited[i]==false)
	          DFSRec(adj,i,visited,ans);
	          
	          
	          
	    }
	    return ans;
	}
};
