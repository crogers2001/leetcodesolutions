class Solution {
public:
    int convertNumeral(const char c){


    int value = 0;

        switch (c) {
            
        case 'I':
            value = 1;
            break;
        case 'V':
            value = 5;
            break;
        case 'X':
            value = 10;
            break;
        case 'L':
            value = 50;
            break;
        case 'C':
            value = 100;
            break;
        case 'D':
            value = 500;
            break;
        case 'M':
            value = 1000;
            break;

        default:
            value = -1;
            break;
        }

return value;
};

bool nextNumGreater(const string str, int position, int currentvalue){
    char next = str[position + 1]; //the next numeral
    int nextvalue = convertNumeral(next); //value of the next numeral

    if (nextvalue > currentvalue){
        return true;
    }

return false;
};

int romanToInt(string s){

        int length = s.length();
        char c = '\0';
        int value = 0;
        int total = 0;

        for (int i = 0; i < length; i++){
            
            c = s[i];
            value = convertNumeral(c);
            
                if (value == -1){
                cout << "Invalid roman numeral (" << c << ") at string position: " << i << endl;
                }

                    if (nextNumGreater(s, i, value)){
                        value *= -1;
                    }

                        total += value;
        }

return total;
};


};
