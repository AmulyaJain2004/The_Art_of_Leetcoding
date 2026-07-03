class Solution {
public:
    int dist (int dx, int dy, int k) {
        return abs(dx) + abs(dy) + k;
    }
    int maxDistance(string moves) {
        int ans = 0;
        int dx = 0;
        int dy = 0; 
        int k = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L'){
                dx --;
            }
            else if (moves[i] == 'R'){
                dx ++;
            }
            else if (moves[i] == 'U'){
                dy ++;
            }
            else if (moves[i] == 'D'){
                dy --;
            }
            else {
                k ++;
            }
        }
        return dist(dx, dy, k);
    }
};