#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    cout << S[0];
    for (int i=1; i<S.size(); i++){
        if(i % 10 == 0){
            cout << "\n";
        }
        cout << S[i];
    }
    cout << "" << endl;

    return 0;
}