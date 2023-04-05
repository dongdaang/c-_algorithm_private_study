#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    cin >> n;
    if (n == 1 || n == 3){
        cnt = -1;
    }
    else{
        int temp = n % 5;
        if (temp == 0){
            cnt = n / 5;
        }
        else if (temp == 1 or temp == 4){
            cnt = n / 5 + 2;
        }
        else if (temp == 2){
            cnt = n / 5 + 1;
        }
        else {
            cnt = n / 5 + 3;
        }
    }
    cout << cnt << endl;
}
