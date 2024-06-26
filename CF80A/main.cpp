#include <iostream>
#include <string>
using namespace std;
 
int main () {
    int n, m;
    int count = 0;
    cin >> n >> m;
    int arr[] ={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=2; i<m; i++){
        if( m % i == 0){
            count++;
        }
        else{
            continue ;
        }
    }
    if(count > 0){
        cout << "NO" ;
    }
    else {
        for(int i=0; i < sizeof(arr)/sizeof(int); i++){
            if(n == arr[i]){
                if(m == arr[i+1]){
                    cout << "YES";
                }
                else{
                    cout << "NO";
                }
            }
            else{
                continue;
            }
        }
    }
    
    
    return 0;
}