#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    // char star[100];
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - 1 - i; j++){
            cout << " ";
        }
        for(int k = 0; k < 2 * i + 1; k++){
            cout << "*";
        }
        cout << "\n";
    }

}