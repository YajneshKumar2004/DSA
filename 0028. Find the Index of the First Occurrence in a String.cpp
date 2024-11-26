class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        for(int i=0; i<m; i++)
        {
            if(haystack.substr(i,n) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};


------------------------------------------------------------------------------------------------------------------------------------------------------------------


class Solution {
public:
    int strStr(string h, string n) {
        auto it = search(h.begin(), h.end(), n.begin(), n.end());
        if(it != h.end())
        {
            return distance(h.begin(),it);
        }
        else return -1;
    }
};
