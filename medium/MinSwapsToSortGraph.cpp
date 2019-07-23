int minSwaps(int A[], int N){
    pair<int, int> arrPos[N];
    for(int i = 0; i < N; i++)
    {
        arrPos[i].first  = A[i];
        arrPos[i].second = i; 
    }
    sort(arrPos, arrPos + N);
    vector<bool> vis(N, false);
    int ans = 0;
    for(int i = 0; i < N; i++)
    {
        if (vis[i] || arrPos[i].second == i)
            continue;
        int cycle_size = 0;
        int j          = i;
        
        while(!vis[j])
        {
            vis[j] = 1;
            j = arrPos[j].second;
            cycle_size++;
        }
        if (cycle_size > 0)
            ans += (cycle_size - 1);
    }
    return ans;
}
