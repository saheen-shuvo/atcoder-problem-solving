#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> distance;
    lights.insert(0);
    lights.insert(x);
    distance.insert(x);
    for(int i = 0; i < n; i ++){
        int p;
        cin >> p;
        auto it = lights.upper_bound(p);
        int r = *it;
        it--;
        int l = *it;
        distance.erase(distance.find(r - l));
        distance.insert(p - l);
        distance.insert(r - p);
        lights.insert(p);
        cout << *distance.rbegin() << " ";
    }
    return 0;
}