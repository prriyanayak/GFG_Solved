int convertFive(int n)
{
//Your code here
    string s;
    s = to_string(n);
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            s[i] = '5';
    }
    int news;
    news = atoi(s.c_str());
    return news;
}
