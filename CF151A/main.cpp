#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalDrink = k * l;
    int totalLimeSlices = c * d;
    int totalSalt = p;
    int toastsByDrink = totalDrink / (n * nl);
    int toastsByLime = totalLimeSlices / n;
    int toastsBySalt = totalSalt / (n * np);
    int minToasts = min({toastsByDrink, toastsByLime, toastsBySalt});

    cout << minToasts << endl;

    return 0;
}
