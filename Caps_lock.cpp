#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()==1){
        if(int(s[0])>=97 && int(s[0])<=122){
            cout<<char(int(s[0])-32);
        }   
         else if(int(s[0])>=65 && int(s[0])<=90){
            cout<<char(int(s[0])+32);     
        }
    }
    else{
        bool ans = true;
        for(int i=1;i<s.length();i++){
            if(!(int(s[i])>=65 && int(s[i])<=90)){
                ans = false;
                break;
            }
        }

        if(ans == false){
            cout<<s;
        }

        else if(ans == true){
            if(int(s[0])>=97 && int(s[0])<=122){
                cout<<char(int(s[0])-32);
              

            for(int i=1;i<s.length();i++){
                cout<<char(int(s[i])+32);
            }
            }
            else if(int(s[0])>=65 && int(s[0])<=90){
                 for(int i=0;i<s.length();i++){
                 cout<<char(int(s[i])+32);
            }
            }

            }  
        }
    }
