class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int distance = 0;
        int left = 0;
        int right = 0;
        int under = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L') {
                left ++;
            }
            else if (moves[i] == 'R') {
                right ++;
            }
            else {
                under ++;
            }
        }
        return max(abs(left - right + under), abs(right - left + under));
    }
};