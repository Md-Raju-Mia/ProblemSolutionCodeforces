#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if (n == 0) return 0; // Edge case: empty input
        
        sort(points.begin(), points.end());

		cout << "Sorted points vector: ";
        for (const auto& point : points) {
            cout << "[" << point[0] << "," << point[1] << "] ";
        }
        cout << endl;
        
        vector<int> prev = points[0];
		cout<<"prev:" <<prev[0]<<endl;
        int count = 1;
        
        for (int i = 1; i < n; i++) {
            int currStartPoint = points[i][0];
			cout<<"currStartPoint:" <<currStartPoint<<endl;
            int currEndPoint = points[i][1];
			cout<<"currEndPoint:" <<currEndPoint<<endl;
            int prevStartPoint = prev[0];
			cout<<"prevStartPoint:" <<prevStartPoint<<endl;
            int prevEndPoint = prev[1];
			cout<<"prevEndPoint:" <<prevEndPoint<<endl;
            
            if (currStartPoint > prevEndPoint) {
                count++;
                prev = points[i];
            } else {
                prev[0] = max(prevStartPoint, currStartPoint);
                prev[1] = min(currEndPoint, prevEndPoint);
            }
        }
        
        return count;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    vector<vector<int>> points1 = {{10,16},{2,8},{1,6},{7,12}};
    cout << "Output for points1: " << solution.findMinArrowShots(points1) << endl; // Output: 2
    
    vector<vector<int>> points2 = {{1,2},{3,4},{5,6},{7,8}};
    cout << "Output for points2: " << solution.findMinArrowShots(points2) << endl; // Output: 4
    
    vector<vector<int>> points3 = {{1,2},{2,3},{3,4},{4,5}};
    cout << "Output for points3: " << solution.findMinArrowShots(points3) << endl; // Output: 2
    
    return 0;
}
