class Solution {
public:
    double areaCalc(vector<int>p1, vector<int>p2, vector<int>p3) {
        double area = 0.5 * abs(p1[0]*(p2[1] - p3[1]) + p2[0]*(p3[1] - p1[1]) + p3[0]*(p1[1] - p2[1]));
        return area;
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0;
        if (points.size() == 3) {
            return areaCalc(points[0], points[1], points[2]);
        }
        for (int i = 0; i < points.size(); i++) {
            for (int j = i+1; j < points.size(); j++) {
                for (int k = j+1; k < points.size(); k++) {
                    maxArea = max(areaCalc(points[i], points[j], points[k]), maxArea);
                }
            } 
        }
        return maxArea;
    }
};