#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int positions = min(b + 1, n - a);
    cout << positions << std::endl;
    return 0;
}
