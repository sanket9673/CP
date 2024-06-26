#include <iostream>
using namespace std ;


// Here they ask the *number of ways* from (1,2,3,4,5) which will help dima not clean

int main() {
    int n ;
    cin >> n ;
    int arr[n] ;
    int count = 0 ;
    int count1 = 0 ;

    for (int i=0 ; i < n ; i++){
        cin >> arr[i] ;
        count += arr[i] ;
    }
    

    for (int i = 1; i < 6; i++){
        if ((count + i) % (n+1) == 1){
            continue ; 
        }
        else {
            count1++ ; 
        }
    }
    cout << count1 ;

    // if ( (n+1) % 2 == 0){
    //     if (count % 2 == 0){
    //         cout << count / n ;
    //     }
    //     else {
    //         cout << (count % (n+1)) + 1 ;
    //     }
    // }
    // else {
    //     if (count % 2 == 0){
    //         cout << count / n ;
    //     }
    //     else {
            
    //     }
    // }
    
    
    return 0;
}



//here for before solution we were calculating the specific number of numbers and not the number of ways .


/*
friend_finger + dima_finger / Total friends present = person who will clean


friend 1 = 1 finger
dima = x 
we dont want dima to clean - 1+x/2 = 1(friend 1)
x = 2-1 = 1 
1
-2
--2 ()

5
-4 4 3 5 1 
-- 4

*/