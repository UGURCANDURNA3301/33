#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	int dizi[10]={5,2,7,9,1,5,8,4,23,56};
	int i,max,min;
	setlocale(LC_ALL,"TURKISH");
	 for(i=0;i<10;i++) cout << dizi[i] << endl;
	 min=dizi[0]; max=dizi[0];
	 for(i=0;i<10;i++)
	 if(min>dizi[i]) min=dizi[i];
	 for(i=0;i<10;i++)
	 if(max<dizi[i]) max=dizi[i];
	 cout << " en büyük :" 
	 << max << " en küçük :" << min<<endl;
	 
	 
}

