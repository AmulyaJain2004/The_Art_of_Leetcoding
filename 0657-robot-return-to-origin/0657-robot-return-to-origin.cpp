class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0;
        // int down = 0;
        int left = 0;
        // int right = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L') {
                left ++;
            }
            else if (moves[i] == 'R') {
                // right ++;
                left --;
            }
            else if (moves[i] == 'U') {
                up ++;
            }
            else {
                // down ++;
                up --;
            }
        }
        // if (up - down == 0 && left - right == 0) {
        if (up == 0 && left == 0) {
            return true;
        }
        return false;
    }
};