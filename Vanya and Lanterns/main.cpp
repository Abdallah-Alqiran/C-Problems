#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#define Abdallah ios_base::sync_with_stdio(0);
#define Alqiran cin.tie(0),cout.tie(0);
#define ll long long

using namespace std;


void solve()
{
    // enter the inputs
    int N,M;
    cin >> N >> M;


    double mx = 0;
    vector<double> V(N);

    for (auto &i : V)
        cin >> i;

    // sorting the vector
    sort(V.begin(),V.end());

    // loop to get max distance
    for (int i=0;i<N-1;++i)
    {
        mx = max((V[i+1] - V[i]) / 2,mx);
    }

    // check if you didn't put lantern in the first or end of the street
    mx = max(mx,V[0]);
    mx = max(mx,M - V[N-1]);

    // print the minimum light radius to light hole the street
    cout << fixed << setprecision(9);
    cout << mx;
}


int main()
{
    Abdallah Alqiran

    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
        cout << '\n';
    }

    return 0;
}
