#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <typeinfo>

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
        int num;
        cin >> s;
        if (s == "push"){
            cin >> num;
            st.push(num);
        }
        else if (s == "pop"){
            if (st.empty()){
                cout << -1 << endl;
            }
            else{
                cout << st.top() << endl;
                st.pop();
            }
        }
        else if (s == "size"){
            cout << st.size() << endl;
        }
        else if (s == "empty"){
            if (st.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else{
            if (st.empty()){
                cout << -1 << endl;
            }
            else{
                cout << st.top() << endl;
            }
        }
    }

}