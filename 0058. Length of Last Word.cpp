class Solution {
public:
    int lengthOfLastWord(string s) {
      int length = 0;
        int i=s.size()-1; 
        while(i>=0 && s[i] == ' ')
        {
            i--;
        }
        while(i>=0 && s[i] != ' ')
        {
            length++;
            i--;
        }
        return length;
    }
};

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>vec;
        istringstream stream(s);
        string word;
        while(stream >> word)
        {
            vec.push_back(word);
        }
        int n = vec.size();
        return vec[n-1].size();
    }
};
