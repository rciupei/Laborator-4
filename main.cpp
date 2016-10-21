#include <iostream>

using namespace std;

int main()
{

       int a[20];
       int max,i,j,nr,n,aux;


   cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;
    for (i = 0; i < nr; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];

    }
     for (i=0, j=nr-1;i<j;i++,j--){
     aux=a[i];
     a[i]=a[j];
     a[j]=aux;
     ;
     }
     for(i=0; i<nr; i++){
     cout << a[i]<<" ";
     }


//   cout << "Cel mai mare numar este:" << max << endl;
    return 0;
}
