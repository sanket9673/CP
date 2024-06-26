#include <iostream>
#include <string>
#include <vector>
using namespace std ;


void check(int n){
    vector<int> arr1 ;
    vector<int>arr2 = {0,1,2,3,4,5,6,7,8,9}  ;
    for(int i=0; i<4; i++){
        arr1[i] = n % 10 ;
        n = n / 10 ;
    }
    for(int i=0 ; i<4; i++){
        if(arr1[i] == true){
            arr1[i] = false;
        }
        else{
            
        }
    }
}

int main() {
    int n;
    cin >> n ;
    int count = 0;
    while(count > 0){
        n = n + 1 ;
        
    }
    
    
    
    return 0;
}