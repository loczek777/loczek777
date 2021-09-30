#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int tablica[10] = {10,2,0,14,43,25,18,1,5,45};
   cout <<"Lista do segregowania\n";
   for(i = 0; i<10; i++) {
      cout <<tablica[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(tablica[j] < tablica[i]) {
         temp = tablica[i];
         tablica[i] = tablica[j];
         tablica[j] = temp;
      }
   }
pass++;
}
cout <<"Posegregowana lista\n";
for(i = 0; i<10; i++) {
   cout <<tablica[i]<<"\t";
}
return 0;
}
