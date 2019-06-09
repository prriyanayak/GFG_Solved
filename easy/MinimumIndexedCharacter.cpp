void printMinIndexChar(string str, string patt)
{
    unordered_map<char, int> freq;
    for(int i = str.size()-1; i >= 0; i--)
        freq[str[i]] = i;
    int min = INT_MAX;
    for(int i = 0; i < patt.size(); i++)
    {
        if(freq.find(patt[i]) != freq.end() && freq[patt[i]] < min)
        {
            min = freq[patt[i]];
        }
    }
    if (min != INT_MAX)
        cout << str[min];
    else
        cout << "No character present";
}
