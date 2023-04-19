#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int N;
    int num[10];
    int tmp;
    int tmp_2;
    int max = 0;
    cin >> N;

    memset(num, 0, sizeof(num));

    string S = to_string(N);

    for (int i = 0; i < S.length(); i++){
        tmp = S[i] - '0';
        num[tmp] += 1;
    }

    tmp_2 = num[6] + num[9];
    if (tmp_2 % 2 == 0){
        num[6] = tmp_2 / 2;
    }
    else{
        num[6] = tmp_2 / 2 + 1;
    }

    for (int i = 0; i < 9; i++){
        if (num[i] > max){
            max = num[i];
        }
    }
    cout << max << endl;
}