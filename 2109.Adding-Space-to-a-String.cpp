class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res = "";
        int space_ptr = 0;
        for (int i = 0; i < s.length(); i++) {
            if (space_ptr < spaces.size() && spaces[space_ptr] == i) {
                res += " ";
                space_ptr++;
            }
            res += s[i];
        }
        return res;
    }
};
