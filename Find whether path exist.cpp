/*
QUESTION LINK
Topic : Graph
https://practice.geeksforgeeks.org/problems/find-whether-path-exist5238/1
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int x_next[4] = {-1,0,1,0};  
     int y_next[4] = {0,1,0,-1};
public:
    bool isValid(int x,int y,vector<vector<int>>& grid){
        if(x < 0 || x > grid.size()-1 || y < 0 || y > grid.size()-1)
            return false;
        if(grid[x][y] == 2 || grid[x][y] == 3)
            return true;
        return false;
    }
    bool  dfs(int x,int y,vector<vector<int>>& grid){
        if(grid[x][y] == 2)
            return true;
        else{
            grid[x][y] = 4;
            for(int t = 0; t < 4; t++){
                if(isValid(x+x_next[t],y+y_next[t],grid))
                     if(dfs(x+x_next[t],y+y_next[t],grid))
                        return true;
            }
        }
        return false;
    }
    bool is_Possible(vector<vector<int>>& grid){
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    if(dfs(i,j,grid))
                        return true;
                }
            }
        }
        return false;  
    }
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}




