#include <iostream>
using namespace std;

int main() {
    string code = "codeforces";
    int T;
    string test;

    cin>>T;
    while(T--) {
        int count = 0;
        cin>>test;
        for(int i=0; i<10; ++i)
        {
            if(code[i] != test[i]) count++;
        }

        cout<<count<<endl;
    }

    return 0;
}