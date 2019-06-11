string printMinIndexChar(string str, string patt)
{
    int flag = 0;
    map<int, string> indices;
    for(int i = 0; i < patt.size(); i++)
    {
        if (str.find(patt[i]) != string::npos)
            indices[str.find(patt[i])] = patt[i];
    }
    if (indices.size() > 0)
    {
        for(auto itr = indices.begin(); itr != indices.end(); itr++)
            return itr->second;
    }
    return "$";
}
