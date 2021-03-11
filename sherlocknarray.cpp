#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++)
    {
        long int m;
        cin >> m;
        int a[m];
        int b = 0;
        if(m ==1) b++;
        for(int i = 0; i < m ; i++) cin >> a[i];
        for(int i = 1; i< m-1; i++)
        {
           int j = i-1;
           int k = i+1;
           long int count1 = 0; long int count2 = 0;
           while(  k <= m -1)
           {
               count2 += a[k];
               k++;
           }
           while(j >= 0)
           {
               count1 += a[j];
               j--;
           }
           if (count1 == count2) {
                b++;
           }

        }
        if (b == 0) cout <<"NO" << endl;
        else cout << "YES" << endl;


    }
}
