class Solution {
public:
    string reverseWords(string s) {
        istringstream stream(s);
        string word;
        vector<string>vec;
        while(getline(stream, word, ' '))
        {
            if(!word.empty())
            {
                vec.push_back(word);
            }
        }
        string str = "";
        for(int i=vec.size()-1; i>=0; i--)
        {
            str += vec[i];
            if(i != 0)
            {
                str += ' ';
            }
        }
        return str;
    }
};

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    string reverseWords(string s) {
        istringstream stream(s);
        string word;
        vector<string>vec;
        while(stream >> word)
        {
            vec.push_back(word);
        }
        string str = "";
        for(int i=vec.size()-1; i>=0; i--)
        {
            str += vec[i];
            if(i != 0)
            {
                str += ' ';
            }
        }
        return str;
    }
};
