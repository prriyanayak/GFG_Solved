int findFrequency(vector<int> v, int x){
    int count = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
            count += 1;
    }
    return count;
    
}
