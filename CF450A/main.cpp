#include <iostream>
#include <vector>
using namespace std ;
int main () {
    int n, m, element;
    cin >> n >> m ;
    vector<int> arr ;
    vector<int> arr1 ;

    for (int i = 0 ; i < n ; i++){
        cin >> element ;
        arr.push_back(element) ;
    }   

    for (int i = 0; i < n ; i++){
        arr1[i] += m ;
    }
    cout << arr1[2] ;
    
    return 0 ;
}