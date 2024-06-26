#include <iostream>
using namespace std;

int main() {
    long n, k, mid;
    cin >> n >> k;
    if (n%2 == 0) {
        mid = n/2;
    }
    else {
        mid = (n/2) + 1;
    }
    if(k<=mid){
        //odd
        cout << 2*(k-1) + 1;
    }
    else{
        //even
        cout << 2*(k-mid);
    }
    return 0;
}
 
/*
1 2 3 4 5 6 7, 7 / 2 = 3
1 3 5 7 2 4 6

k = 1: 1 = 2*(k-1) + 1
k = 2: 3 = 2*(k-1) + 1
k = 3: 5 = 2*(k-1) + 1

k = 5: 2 = 2*(k-4)
k = 6: 4 = 2*(k-4)
k = 7: 6 = 2*(k-4)
*/