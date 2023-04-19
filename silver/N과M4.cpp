#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v;

void print(){
    for (int i = 0; i < M; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void backtracking(int n){
    if (v.size() == M){
        print();
        return;
    }

    for (int i = n; i < N + 1; i++){
        v.push_back(i);
        backtracking(i);
        v.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    backtracking(1);
}