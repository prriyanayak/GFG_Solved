bool checkPangram (string &str)
{
    map<char, int> freq;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(int i = 97; i <= 122; i++)
        freq[(char)i] += 1;
        
    for(int i = 0; i < str.size(); i++)
    {
        if (freq.find(str[i]) != freq.end())
            freq[str[i]] += 1;
    }
        
        
    map<char, int>::iterator itr;
    for(itr = freq.begin(); itr != freq.end(); itr++)
    {
        if (itr->second == 1)
            return false;
    }
    return true;
}
