////////////////////실행속도 : 2004ms////////////////////

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int N, M;
int cnt = 0;
int graph[1001][1001] = {0, };
int visited[1001][1001] = {0, };
int check[1001] = {0};
queue<int> q;


void bfs(){
    while(!q.empty()){
        int now = q.front();
        q.pop();

        for (int i = 1; i < N + 1; i++){
            if (visited[now][i]){
                continue;
            }
            if (graph[now][i]){
                q.push(i);
                visited[now][i] = 1;
                visited[i][now] = 1;
            }
            if (graph[i][now]){
                q.push(i);
                visited[now][i] = 1;
                visited[i][now] = 1;
            }
        }
    }
    cnt++;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int u, v;

    for (int i = 0; i < M; i++){
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
        check[u] = 1;
        check[v] = 1;
    }

    for (int i = 1; i < N + 1; i++){
        if (!check[i]){
            cnt++;
        }
    }

    for (int i = 1; i < N + 1; i++){
        for (int j = 1; j < N + 1; j++){
            if (graph[i][j] && !visited[i][j]){
                q.push(i);
                q.push(j);
                visited[i][j] = 1;
                visited[j][i] = 1;
                bfs();
            }
        }
    }

    cout << cnt << endl;
}


///////////////////실행 속도 : 0ms///////////////////////

/*
#include <iostream>
#include <map>
#include <set>

using namespace std;

short group[1001];
short Find(short x)
{
	if (x == group[x])
		return x;

	return group[x] = Find(group[x]);
}

// 같은 그룹일 경우 false, 다른 그룹일 경우 true
bool Union(short a, short b)
{
	a = Find(a);
	b = Find(b);

	group[b] = a;

	return a != b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i <= n; ++i) 
		group[i] = i;

	int groupCount = n;
	for (int i = m; i-- && groupCount > 1;)
	{
		int u, v;
		cin >> u >> v;
		if (Union(u, v))
			--groupCount;
	}

	cout << groupCount;

	return 0;
}
*/