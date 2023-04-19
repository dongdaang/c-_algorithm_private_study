#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int level[100];
    int sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> level[i];
    }

    for (int i = N - 1; i > 0; i--){
        if (level[i] <= level[i - 1]){
            sum += level[i - 1] - level[i] + 1;
            level[i - 1] = level[i] - 1;
        }
    }
    cout << sum << endl;
}