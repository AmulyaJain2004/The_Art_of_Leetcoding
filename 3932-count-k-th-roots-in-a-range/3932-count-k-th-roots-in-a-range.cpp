class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int ans = 0;

        double nr = floor(pow((double)r, 1.0/k));
        double nl = floor(pow((double)l, 1.0/k));

        while(pow(nr+1,k) <= r) nr++;
        while(pow(nr,k) > r) nr--;

        while(pow(nl+1,k) <= l) nl++;
        while(pow(nl,k) > l) nl--;

        if(pow(nl,k) == l)
            ans = (int)(nr - nl + 1);
        else
            ans = (int)(nr - nl);

        return ans;
    }
};