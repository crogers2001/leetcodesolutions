class Solution {
public:
    bool isPalindrome(int x) {
        
        //always false if negative
        if (x < 0){
            return false;
        }

        string s = to_string(x);
        int lastdigit = s.size()-1;
        int middledigit = s.size() / 2;

        for (int i = 0; i < middledigit; i++){
            if (s[i] != s[lastdigit - i]){
                return false;
            }
        }
    return true;
    }
};
