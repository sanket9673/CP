    #include <iostream>
    #include <string>
    using namespace std;

    int main(){
        string s;
        cin >> s;
        int count = 0;
        bool visited[26] = {false} ;
        for(int i=0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' && !visited[s[i] - 'a']){
                count++;
                visited[s[i] - 'a'] = true; 
                }
        }
        if(count % 2 == 0){
            cout << "CHAT WITH HER!" ;
        }
        else{
            cout << "IGNORE HIM!";
        }
        
        return 0;
    }