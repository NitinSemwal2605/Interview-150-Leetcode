#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int len = 0;
    int last = s.length()-1;

    for(int i=last;i>=0;i--){
        if(s[i]!= ' '){
            len++;
        }
        if(s[i]==' ' && len>0){
            break;
        }
    }
    return len;   
}

int main() {
    string s = "Hello World";
    cout<<lengthOfLastWord(s)<<endl;
    return 0;
}