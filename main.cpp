#include <iostream>

using namespace std;

int main()
{

       int a[20];
       int max,i,nr,n;

   max = a[0];
   cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;
    for (i = 0; i < nr; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];

    }
     for (i = 0; i < nr; i++){
    if (max < a[i])
        max=a[i];}

  /* for (i = 1; i <5; i++ )
   {

   }*/
   cout << "Cel mai mare numar este:" << max << endl;
    return 0;
}
