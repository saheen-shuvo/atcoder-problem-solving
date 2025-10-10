#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    int count = 0;
    for(int i=0, j=0; i<S.length() && j<T.length(); i++, j++){
        if(S[i] != T[i]){
            swap(S[i], T[i]);
            count++;
        }
    }
    cout << count;
    return 0;
}