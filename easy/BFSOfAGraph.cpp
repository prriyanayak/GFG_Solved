void bfs(int s, vector<int> adj[], bool vis[])
{
    list<int> queue;
    vis[s] = true;
    queue.push_back(s);
    
    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for(auto i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!vis[*i])
            {
                vis[*i] = true;
                queue.push_back(*i);
            }
        }
        
    }
}
