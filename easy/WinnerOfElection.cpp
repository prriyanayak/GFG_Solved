void winner(string arr[],int n)
{
    map<string, int> votes;
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        votes[arr[i]] += 1;
        if (votes[arr[i]] > max) 
            max = votes[arr[i]];
    }
    for(auto itr = votes.begin(); itr != votes.end(); itr++)
    {
        if (itr->second == max)
        {
            cout << itr->first << " " << itr->second;
            break;
        }
    }
}
