#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int N;
stack<int> st;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    while(N--){
        string s;
        cin >> s;
        if (s[0] == 'p' && s[1] == 'u'){
            string x, y;
            stringstream temp(s);
            temp >> x >> y;
            int num = stoi(y);
            st.push(num);
        }
        else if (s[0] == 'p'){
            if (st.empty()){
                cout << -1;
            }
            else{
                st.pop();
                cout << st.top();
            }
        }
        else if (s[0] == 's'){
            int num;
            cout << st.size();
        }
        else if (s[0] == 'e'){
            if (st.empty()){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        else{
            if (st.empty()){
                cout << -1;
            }
            else{
                cout << st.top();
            }
        }
    }

}