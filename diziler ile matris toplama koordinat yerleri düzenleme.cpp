#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y){
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(){
	setlocale(LC_ALL,"TURKISH");
	float mb[3][3]={0,3,1, 2,1,3, 0,2,1};
	
	float ma[3][3]={0,-1,0, 1,0,0, 0,0,1};
	float mc[3][3];
	int x1,y1,i,j,k; 
		// matris toplamý
	for(i=0;i<3;i++)
	for(j=0;j<3;j++) mc[i][j]=ma[i][j]+mb[i][j];
	system("CLS");
	//ekrana yazdýrma iþlemi
	x1=0;y1=0;
	gotoxy(8,1); cout <<"+";

	for(i=0;i<3;i++){
		gotoxy(x1,y1);
		for(j=0;j<3;j++){
			gotoxy(x1,y1) ;cout << ma[i][j] << " ";
			x1+=3;
		}
		y1++; x1=0;
	}
	
	x1=11;y1=0;
	for(i=0;i<3;i++){
		gotoxy(x1,y1);
		for(j=0;j<3;j++){
			gotoxy(x1,y1) ;cout << mb[i][j] ;
			x1+=3;
		}
		y1++; x1=11;
	}
	gotoxy(19,1); cout <<"=";
		x1=22;y1=0;
	for(i=0;i<3;i++){
		gotoxy(x1,y1);
		for(j=0;j<3;j++){
			gotoxy(x1,y1) ;cout << mc[i][j] ;
			x1+=3;
		}
		y1++; x1=22;
	}
	
	// Matris Çarpýmý
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++){
	   	mc[i][j]=0;
	   	for(k=0;k<3;k++)
	   	mc[i][j]=mc[i][j]+ma[i][k]*mb[k][j];
	   }
	
	// çarpmay yazdýr
	x1=0;y1=6;
	gotoxy(9,7); cout <<"x";

	for(i=0;i<3;i++){
		gotoxy(x1,y1);
		for(j=0;j<3;j++){
			gotoxy(x1,y1) ;cout << ma[i][j] << " ";
			x1+=3;
		}
		y1++; x1=0;
	}
	
	x1=11;y1=6;
	for(i=0;i<3;i++){
		gotoxy(x1,y1);
		for(j=0;j<3;j++){
			gotoxy(x1,y1) ;cout << mb[i][j] ;
			x1+=3;
		}
		y1++; x1=11;
	}
	gotoxy(19,7); cout <<"=";
		x1=22;y1=6;
	for(i=0;i<3;i++){
		gotoxy(x1,y1);
		for(j=0;j<3;j++){
			gotoxy(x1,y1) ;cout << mc[i][j];
			x1+=3;
		}
		y1++; x1=22;
	}
	return 0;
}
