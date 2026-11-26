class Solution {
public:
    bool canAliceWin(int n) {
        int numStonesRemoved = 10;
        int cntPlayerMoves = 0;
        while (n) {
            if (n >= numStonesRemoved) {
                n-= numStonesRemoved;
                numStonesRemoved --;
                cntPlayerMoves ++;
            }
            else {
                if (cntPlayerMoves % 2 == 1) {
                    return true;
                }
                break;
            }
        }
        if (cntPlayerMoves % 2 == 1) {
            return true;
        }
        return false;
    }
};