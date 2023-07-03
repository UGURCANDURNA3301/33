#include<iostream>
#include<locale.h>
using namespace std;

int main(){
setlocale(LC_ALL,"TURKISH");
int dizi[10]={5,6,4,3,8,99,777,554,665,776};
int i,max,min;

for(i=0;i<10;i++)

cout<<dizi[i]<<endl;

min=dizi[0];
max=dizi[0];

for(i=0;i<10;i++)
if(min>dizi[i]) 
min=dizi[i];

for(i=0;i<10;i++)
if(max<dizi[i])
max=dizi[i];
cout<<"en büyük: "<<max<<"en küçük : "<<min<<endl;
return 0;
}
