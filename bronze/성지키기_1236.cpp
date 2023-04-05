#include <iostream>
#include <cstring>

using namespace std;

int N, M, ans;
char grid[50][50];

void input(){
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> grid[i][j];
        }
    }
}

int check(){
    int row_check[N];
    int col_check[M];
    memset(row_check, -1, N * sizeof(int));
    memset(col_check, -1, M * sizeof(int));

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (grid[i][j] == 'X'){
                row_check[i] = 1;
                col_check[j] = 1;
            }
        }
    }
    int row_cnt = 0;
    int col_cnt = 0;
    for (int i = 0; i < N; i++){
        if (row_check[i] == -1){
            row_cnt++;
        }
    }
    for (int i = 0; i < M; i++){
        if (col_check[i] == -1){
            col_cnt++;
        }
    }

    if (row_cnt > col_cnt){
        return row_cnt;
    }
    else{
        return col_cnt;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    ans = check();

    cout << ans << endl;
}