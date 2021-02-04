/*
QUESTION LINK
TOPIC : Knight Walk
https://practice.geeksforgeeks.org/problems/knight-walk4521/1#
*/

// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int x_next[8] = {-2,-1,1,2,2,1,-1,-2};
    int y_next[8] = {-1,-2,-2,-1,1,2,2,1};
public:
    bool isSafe(int x,int y,vector<vector<int>>&visited){
        if(x < 0 || x > visited.size()-1 || y < 0 || y > visited.size()-1)
            return false;
        if(visited[x][y] == 1)
            return false;
        return true;
    }

	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    vector<vector<int>> grid(N+1,vector<int>(N+1,0));
	    vector<vector<int>> visited(N+1,vector<int>(N+1,0));
	    int x1 = KnightPos[0]-1,y1 = KnightPos[1]-1, x2 = TargetPos[0]-1, y2 = TargetPos[1]-1;
	    queue<pair<int,int>> q;
	    grid[x1][y1] = 1;
	    q.push({x1,y1});
	    visited[x1][y1] = 1;
	    while(!q.empty()){
	        int x = q.front().first;
	        int y = q.front().second;
	        q.pop();
	        for(int i = 0; i < 8; i++){
	            if(isSafe(x + x_next[i],y + y_next[i],visited)){
	                q.push({x + x_next[i],y + y_next[i]});
	                visited[x + x_next[i]][y + y_next[i]] = 1;
	                grid[x + x_next[i]][y + y_next[i]] = grid[x][y] + 1;
	               if(x + x_next[i] == x2 && y + y_next[i] == y2)
	                    return grid[x + x_next[i]][y + y_next[i]] - 1;
	            }
	        }
	    }
	    return 0;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
