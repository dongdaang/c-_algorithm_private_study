#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

short N;
short lowest = 101;
short highest = 0;
short grid[101][101] = {0, };
short grid_copy[101][101];
short visited[101][101];
short dx[4] = {-1, 1, 0, 0};
short dy[4] = {0, 0, -1, 1};
short cnt = 0;
short ans = 0;
pair<short, short> xy;
queue<pair<short, short>> q;


void sink(int height){
    for (int i = 1; i < N + 1; i++){
        for (int j = 1; j < N + 1; j++){
            if (grid_copy[i][j] <= height){
                grid_copy[i][j] = 0;
            }
        }
    }
}

void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx < 1 || nx >= N + 1 || ny < 1 || ny >= N + 1 || visited[nx][ny]){
                continue;
            }
            
            if (grid_copy[nx][ny] == 0){
                q.push(make_pair(nx, ny));
                visited[nx][ny] = 1;
            }

        }
    }
    cnt ++;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 1; i < N + 1; i++){
        for (int j = 1; j < N + 1; j++){
            cin >> grid[i][j];
            if (grid[i][j] < lowest){
                lowest = grid[i][j];
            }
            if (grid[i][j] > highest){
                highest = grid[i][j];
            }
        }
    }

    for (int h = lowest; h < highest + 1; h++){
        visited[101][101] = {0, };
        copy(&grid[1][1], &grid[N+1][N+1] + 1, &grid_copy[0][0]);
        sink(h);
        for (int i = 1; i < N + 1; i++){
            for (int j = 1; j < N + 1; j++){
                if (grid_copy[i][j] == 0 && !visited[i][j]){
                    visited[i][j] = 1;
                    q.push(make_pair(i, j));
                    bfs();
                }
            }
        }
        if (cnt > ans){
            ans = cnt;
        }
    }

    cout << ans << endl;
}