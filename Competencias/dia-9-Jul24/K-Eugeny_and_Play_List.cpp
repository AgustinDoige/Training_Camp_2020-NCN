#include <bits/stdc++.h>
using namespace std;
 
int n, m, c, t, v, song, tme;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int list[n+5];
    list[0] = 0;
    for (int i=1; i<=n; ++i) {
        cin >> c >> t;
        list[i] = c*t;
    }
    for (int i=0; i<m; ++i) {
        cin >> v;
        while (tme<v) {
            ++song;
            tme += list[song];
        }
        cout << song << "\n";
    }
}