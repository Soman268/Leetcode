class Solution {
public:
    string Comp(string s)
    {
        int n = s.size();
        string res = "";
        int count = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i] == '#') count ++; // If we're getting a "#" we're increasing count
            else
            {
                if(count) count--; //If we're iterating till we delete all the element before "#"
                else
                {
                    res += s[i];
                }
            }
        }
        return res;
    }
    bool backspaceCompare(string s, string t) {
        return Comp(s)==Comp(t);
    }
};