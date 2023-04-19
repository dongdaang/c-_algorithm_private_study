#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    cin >> T;

    for (int tc = 1; tc < T + 1; tc++){
        cin >> N;
        int cnt = 1;
        unordered_set<char> num;
        while(1){
            int temp = N;
            if (num.size() == 10){
                break;
            }
            temp = N * cnt;
            string _N = to_string(N);
            for (int i = 0; i < _N.size(); i++){
                num.insert(_N[i]);
            }
        }
        cout << "#" << tc << " " << cnt << endl;
    }
}