#include <iostream>
#include <map>

using namespace std;

void _3eedSa3eed()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
}

void Register(int N)
{
    map<string, int> M;

    for (int i=0;i<N;++i)
    {
        string m;
        cin >> m;


        if (M[m] == 0)
        {
            cout << "OK";
            M[m]++;
        }

        else
        {
            cout << m << M[m];
            M[m]++;
        }
        cout << '\n';
    }

}

int main()
{
    _3eedSa3eed();

    int N;      cin >> N;

    Register(N);

    return 0;
}