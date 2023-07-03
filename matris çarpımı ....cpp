
#include<iostream>
#include<locale.h>
#include<windows.h>
using namespace std;

	void gotoxy(int x, int y){
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

	int main(){
	
	float ma[3][3]={1,5,3, 4,5,2, 1,2,3};
	float mb[3][3]={4,3,1, 1,1,1, 2,6,3};
	float mc[3][3];
	int x1, y1,i,j,k;



//çarpma iþlemi...
 	for(i=0;i<3;i++){
 	for(j=0;j<3;j++){
 	mc[i][j]=0;
 	for(k=0;k<3;k++)
 	mc[i][j]=mc[i][j]+ma[i][k]*mb[k][j];
 }//çarpma iþlemini ekrana yazdýrma...
}
	x1=0;y1=0;
	gotoxy(8,1); cout<<"x";	
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	gotoxy(x1,y1);cout<<ma[i][j]<<"  ";
	x1+=2;
	}
	y1++; x1=0;
	
	}
	x1=12;y1=0;
	for(i=0;i<3;i++){
	gotoxy(x1,y1);
	for(j=0;j<3;j++){
	gotoxy(x1,y1);	cout<<mb[i][j];
	x1+=2;
	}
	y1++;x1=12;
	}
	gotoxy(19,1);	cout<<"=";
	x1=22;y1=0;
	for(i=0;i<3;i++){
	gotoxy(x1,y1);
	for(j=0;j<3;j++){

	gotoxy(x1,y1);cout<<mc[i][j];
	x1+=3;
}
	y1++;x1=22;
	}
}
