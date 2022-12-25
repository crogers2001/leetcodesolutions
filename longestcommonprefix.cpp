class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        /*
                while (current char matches):
        step 1: get the first char in the first string
        step 2: compare this char to the first chars of each other vector
        step 3: if they all share the first char of the 1st string, insert 
                it into the output string. IF NOT, matching = false, return.
        step 4: get next char of the first string, REPEAT until char is no longer
                matching 
        */

        if (strs.size() == 0){
            return "";
        }
        if (strs.size() == 1){
            return strs[0];
        }

        ostringstream outSS;
        string first = strs[0];
        string currentstr = "";
        char currentchar = '\0';
        int c = 0;
        int lastvectorindex = strs.size() - 1;

        outSS << currentstr;
        
            while (true){

            if (c == first.size()){
                return outSS.str();
            }
                currentchar = first[c]; //getting the char to compare

                    for (int i = 1; i < strs.size(); i++){
                        
                        currentstr = strs[i]; 
                        

                        if (currentstr[c] != currentchar){ //if the char doesn't match, return
                            return outSS.str();
                        }

                        if (i == lastvectorindex){ //if last vector is checked, char matches
                            outSS << currentchar;
                            c++;
                        }

                    }
            }

        return outSS.str();
    }
};
