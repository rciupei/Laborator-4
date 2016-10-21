#include <iostream>

using namespace std;

int main()
{
       long sum=0;
       int a[20];
       int nr;
   cout <<"Cate numere adunati? ";
   cin>>nr;

   for (int  i = 0; i <nr; i++ )
   {
        cin >> a[i];
    sum = sum + a[i];

   }
   cout << "Suma elementelor sirului a este : " << sum << endl;
    return 0;
}
