
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n+1; i++)
    {
        cin >> b[i];
    }
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < n; j++ )
        {
            if(a[i] < a[j]) swap(a[i], a[j]);
        }

    }
    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < n; j++ )
        {
            if(b[i] < b[j]) swap(b[i], b[j]);
        }
    }
    for( int i= 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            cout << b[i] ;
            return 0;
        }
    }
    cout << b[n];

    return 0;
}

