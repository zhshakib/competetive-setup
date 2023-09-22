#include <iostream>
using namespace std;

void solve();

int main() {
    int T;
    cin>>T;
    while(T--) {
        solve();
    }
	return 0;
}

void solve(){
    int n, k, i=0, count = 0 ;
    string paper;
    cin>>n>>k;
    cin>>paper;

    while(i < n) {
        if(paper[i] == 'B') {
            for(int j = i; j < i+k; ++j)
            {
                if(paper[j] == 'B') {
                    paper[j] = 'W';
                }
            }
            count++;
            i = i + k ;
            continue;
        }
        i++;

    }
    cout<<count<<endl;
}