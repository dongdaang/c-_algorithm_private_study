#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    int cnt = 0;
    string S;
    set<string> string_list;


    cin >> N >> M;
    for (int i = 0; i < N; i++){
        cin >> S;
        string_list.insert(S);
    }

    for (int i = 0; i < M; i++){
        cin >> S;
        if (string_list.find(S) != string_list.end()){
            cnt += 1;
        }
    }

    cout << cnt << endl;
}