class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry {0};
        int i = a.size() - 1;
        int j = b.size() - 1;
        while (i >= 0 && j >= 0) {
            if (a[i] == '1' && b[j] == '1') {
                if (carry) {
                    ans = '1' + ans;
                }
                else {
                    ans = '0' + ans;
                    carry = 1;
                }
            }
            else if ((a[i] == '1' && b[j] == '0')|| (a[i] == '0' && b[j] == '1')) {
                if (carry) {
                    ans = '0' + ans;
                }
                else {
                    ans = '1' + ans;
                }
            }
            else if (a[i] == '0' && b[j] == '0') {
                if (carry) {
                    ans = '1' + ans;
                    carry = 0;
                }
                else {
                    ans = '0' + ans;
                }
            }
            i --;
            j --;
        }
        if (i < 0 && j >= 0) {
            i = 0;
        }
        else if (j < 0 && i >= 0) {
            j = 0;
        }
        if (b.size() > a.size()) {
            while (j >= 0 && i == 0) {
                if (b[j] == '1' && carry == 1) {
                    ans = '0' + ans;
                }
                else if ((b[j] == '1' && carry == 0) || (b[j] == '0' && carry == 1)) {
                    ans = '1' + ans;
                    carry = 0;
                }
                else if (b[j] == '0' && carry == 0) {
                    ans = '0' + ans;
                }
                j --;
            }
        }
        else {
            while (i >= 0 && j == 0) {
                if (a[i] == '1' && carry == 1) {
                    ans = '0' + ans;
                }
                else if ((a[i] == '1' && carry == 0) || (a[i] == '0' && carry == 1)) {
                    ans = '1' + ans;
                    carry = 0;
                }
                else if (a[i] == '0' && carry == 0) {
                    ans = '0' + ans;
                }
                i --;
            }
        }
        if (carry) {
            ans = '1' + ans;
        }
        return ans;
    }
};