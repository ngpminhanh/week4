#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    string str[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >>  str[i];
        a[i] = str[i].length();
    }
    for ( int i = 0; i < n; i++)
    {
        for (int j = n; j >= i +1; j--)
        {
            if (a[i] == a[j])
            {
               int k = 0; int l = a[i] - 1;
               while(k < a[i] && l >= 0)
               {
                   if(str[i][k] == str[j][l])
                   {
                       count ++;

                   }
                   k++;
                   l--;
               }
               if(count == a[i] && count % 2 != 0)
               {
                   cout << count<< endl;
                   cout <<  str[i][(a[i] -1)/2];
                   return 0;
               }
            }
        }
    }


}
