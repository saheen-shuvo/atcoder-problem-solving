#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int coin=0;
    int Opr = 2;
    while(Opr--){
        if(A >= B){
            coin += A;
            A--;
        }
        else if(B > A){
            coin += B;
            B--;
        }
    }
    cout << coin;
    return 0;
}