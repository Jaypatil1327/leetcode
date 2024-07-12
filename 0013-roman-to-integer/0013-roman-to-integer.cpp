class Solution {
public:
    int tochar(char x) {
        switch (x) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }

        return 0;
    }
    int romanToInt(string n) {

        int ans = tochar(n[n.length() - 1]);

        for (int i = n.length() - 2; i >= 0; i--) {
            if (tochar(n[i]) < tochar(n[i + 1])) {
                ans -= tochar(n[i]);
            } else {
                ans += tochar(n[i]);
            }
        }
        return ans;
    }
};