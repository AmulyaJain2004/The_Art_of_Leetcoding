class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int matchNum = 0;
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int pl = 0;
        int tr = 0;
        while(pl < players.size() && tr < trainers.size()){
            if (players[pl] <= trainers[tr]){
                matchNum ++;
                pl ++;
                tr ++;
            }
            else {
                tr ++;
            }
        }
        return matchNum;
    }
};