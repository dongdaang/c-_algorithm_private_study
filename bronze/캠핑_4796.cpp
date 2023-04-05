#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L, P, V;
    int cnt = 0;
    while(true){
        cnt ++;
        cin >> L >> P >> V;
        if(L == 0){
            break;
        }
        int temp_1, temp_2 = 0;

        temp_1 = V / P;
        temp_2 = V % P;
        if(temp_2 >= L){
            cout << "Case " << cnt << ": " << L * (temp_1 + 1) << endl;
        }
        else{
            cout << "Case " << cnt << ": " << L * temp_1 + temp_2 << endl;
        }
    }
}