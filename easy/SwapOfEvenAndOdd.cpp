#include<bits/stdc++.h>
using namespace std;

string convertBinary(int x)
{
    string s;
    while(x > 0)
    {
        int r = x % 2;
        s += (r + '0');
        x = x / 2;
    }
    return s;
}

int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
  
    return dec_value; 
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        string s = convertBinary(x);
        if (s.size() < 8)
        {
            while(s.size() != 8)
            {
                s += '0';
            }
        }
        
        reverse(s.begin(), s.end());
        // cout << s << endl;
        for(int i = 0; i < s.size()-1; i++)
        {
            char temp = s[i+1];
            s[i+1] = s[i];
            s[i] = temp;
            i++;
        }
        int final = binaryToDecimal(atoi(s.c_str()));
        cout << final << endl;
    }
}
// 00101011
