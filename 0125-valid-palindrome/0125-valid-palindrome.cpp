class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0 ;
        string ns = "";
        // first we remove the unnecessary non alpha nums and keep cleaned in new string
        for (char c: s) {
            if (isalnum(c)) {
                ns+=tolower(c);
            }
        }
        // then using 2 pointer to check palindrome left and right
        int r = ns.size() - 1;
        while(l<r){
            if (ns[l] != ns[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};