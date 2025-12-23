#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    double P;
    if (!(cin >> N >> P)) return 0;

    priority_queue<double, vector<double>, greater<double>> pq;
    for (int i = 0; i < N; ++i) {
        double x;
        cin >> x;
        pq.push(x);
    }

    double coef = 1.0 - P / 100.0;

    while (pq.size() > 1) {
        double a = pq.top(); pq.pop();
        double b = pq.top(); pq.pop();
        double merged = (a + b) * coef;
        pq.push(merged);
    }

    double ans = pq.top();
    cout << fixed << setprecision(2) << ans << "\n";
    return 0;
}
