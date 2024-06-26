#include <iostream>
using namespace std;

int main(){
    int n;
    float volume = 0;
    cin >> n;
    int p[n];
    for(int i=0; i<n; i++){
        cin >> p[i] ;
    }
    for(int i=0; i<n; i++){
        volume += p[i] ;
    }
    
    cout << (volume / (n * 100)) * 100 << endl ;
    return 0;

}
