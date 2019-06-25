{
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
void reverseWords(char*);
/* Driver function to test above functions */
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[10000];
        cin >> s;
        reverseWords(s);
        cout<<endl;
    }
}
}
/*This is a function problem.You only need to complete the function given below*/

/*Function to reverse words*/
void reverseWords(char *s) {
    string str(s);
    string final = "";
    vector<string> words;
    int i;
    for(i = 0; i < str.size(); i++)
    {
        final += str[i];
        if (str[i] == '.')
        {
            words.push_back(final);
            final = "";
        }
    }
    for(int j = i; j < str.size(); j++)
    {
        final += str[i];
    }
    words.push_back(final);
    string last = "";
    last += words[words.size()-1] + ".";
    for(int i = words.size()-2; i >= 0; i--)
        last += words[i];
    last.pop_back();
    cout << last;
}
