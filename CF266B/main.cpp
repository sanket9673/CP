#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t>0){
        int i=0;
        for(int i=0; i<n-1; i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
        t--;
    }
    cout << s ;
    return 0;
}

// Single quotes (') are used to represent single characters, such as 'A', 'B', 'C', etc. They are essentially of type char.
// Double quotes (") are used to represent strings of characters, such as "ABC", "Hello", "World", etc
