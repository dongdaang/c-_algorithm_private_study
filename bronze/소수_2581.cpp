#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;
    int temp;
    int sum = 0;
    int min = 0;

    if(M == 1 and N == 1){
        cout << -1 << endl;
    }
    else{
        if(M == 1 or M == 2){
        M = 3;
        sum += 2;
        min = 2;
    }

    for(int i = M; i < N + 1; i++){
        temp = sqrt(i);
        int cnt = 0;
        bool flag = true;
        for(int j = 2; j < temp + 1; j++){
            if(i % j == 0){
                cnt += 1;
            }
            if(cnt > 0){
                flag = false;
                break;
            }
        }
        if(flag){
            sum += i;
            if(min == 0){
                min = i;
            }
        }
    }
    if(sum != 0){
        cout << sum << "\n" << min << endl;
    }
    else{
        cout << -1 << endl;
    }
    }
}