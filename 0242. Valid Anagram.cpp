class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>s_map;
        map<char, int>t_map;
        for(auto i : s)
        {
            s_map[i]++;
        }
        for(auto i : t)
        {
            t_map[i]++;
        }
        if(s_map.size() != t_map.size())
        {
            return false;
        }
        for(auto i : s) 
        {
            if(s_map[i] != t_map[i]) return false;
        }
        for(auto i : t)
        {
            if(s_map[i] != t_map[i]) return false;
        }
        return true;
    }
};

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }
};


