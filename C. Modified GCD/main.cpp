#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#define Abdallah ios_base::sync_with_stdio(0);
#define Alqiran cin.tie(0),cout.tie(0);
#define ll long long

using namespace std;

map<ll,int> M;
vector<ll> V;
int low,high;

void Divisors(ll N)
{
    for (int i=1; i<=N/i; ++i)
    {
        if (N % i == 0)
        {
            M[i]++;

            if (i * i != N)
                M[N / i]++;
        }
    }
}

long long Check()
{
    int left = 0,right = V.size();
    int md;
    ll number = -1;

    while (left <= right)
    {
        md = (left + right) / 2;

        if (V[md] > high)
        {
            right = md - 1;
        }

        else if (V[md] < high)
        {
            if (V[md] >= low)
                number = max(number, V[md]);
            left = md + 1;
        }


        else
        {
            return high;
        }
    }
   return number;
}


void solve()
{
    ll A,B;
    cin >> A >> B;


    Divisors(A);
    Divisors(B);

    for (auto i : M)
    {
        if (i.second == 2)
        {
            V.push_back(i.first);
        }
    }

//    for (auto i : V)
//        cout << i << ' ';

    int Q;
    cin >> Q;

    while (Q--)
    {
        cin >> low >> high;

        cout << Check() << '\n';

    }


}


int main()
{
    Abdallah Alqiran

    void Vector();

    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
        cout << '\n';
    }

    return 0;
}
