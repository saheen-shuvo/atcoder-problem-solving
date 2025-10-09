#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fre[26] = {0};
    string S;
    cin >> S;
    for(int i=0; i<S.size(); i++){
        int k = S[i] - 'a';
        fre[k]++;
    }
    for(int i=0; i<26; i++){
        if(fre[i] == 0){
            char c = i + 'a';
            cout << c;
            return 0;
        }
    }
    cout << "None";
    return 0;
}