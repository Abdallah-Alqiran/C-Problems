#include <iostream>

using namespace std;

int A1,A2;
int A[100][100];
int B1,B2;
int B[100][100];


void Matrix()
{
    long long sum=0;
    int k = 0;
    for (int i=0;i<A1;)
    {
        for (int j=0;j<A2;++j)
        {
            sum += A[i][j] * B[j][k];
        }
        k++;
        cout << sum << ' ';
        sum = 0;
        if (k == B2)
        {
            k=0;
            i++;
            cout << '\n';
        }
    }
}


int main()
{
    cin >> A1 >> A2;
    for (int i=0; i<A1; ++i)
    {
        for (int j=0; j<A2; ++j)
        {
            cin >> A[i][j];
        }
    }

    cin >> B1 >> B2;

    for (int i=0; i<B1; ++i)
    {
        for (int j=0; j<B2; ++j)
        {
            cin >> B[i][j];
        }
    }

    Matrix();

    return 0;
}
