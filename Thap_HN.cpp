//Nguyen Huu Truong-N19DCCN221
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<string.h>
#include<bits/stdc++.h>
#include<mylib.h>
#define RED 4
#define YELLOW 6
#define GREEN 2
#define BLUE 1
#define WHITE 15
#define BLACK 0
using namespace std;
string s[9] ={"          ", "         ", "        ", "       ", "      ", "     ", "    ", "   ", "  "};	
string d[512];// mang luu kq
int c=0; // bien dem
void VeCot (){
	for(int i=0; i<10; i++){
		int tmp = 20;
		for(int j=0; j<3; j++){
			if(j>0) tmp += 25;
			gotoxy(tmp, 10+i);
			SetBGColor(GREEN);
			cout<<"  ";
			SetBGColor(BLACK);
		}		
	}
	int tmp=10;
	for(int j=0; j<3; j++){
		if(j>0) tmp+=25;
		gotoxy(tmp, 20);
		SetBGColor(GREEN);
		for(int k = 0; k < 22; k++){
			cout<<" ";
		}
		SetBGColor(BLACK);
	}
}
void VeDia(int n){
	int tx = 11, ty = 19;
	for(int i=0; i<n; i++){
		gotoxy(tx, ty);
		SetBGColor(RED);
		s[i]+=s[i];
		cout<<s[i];
		SetBGColor(BLACK);
		tx++;
		ty--;
	}
}
void ThuatToan(int n, string nguon, string tg, string dich){
	if(n == 1){
		c++;
		d[c] = nguon + dich;
	}
	else{
		ThuatToan(n-1, nguon, dich, tg);
		ThuatToan(1, nguon, tg, dich);
		ThuatToan(n-1, tg, nguon, dich);
	}
}
void ThucHienAB(int n, int sa, int sb, int a, int b){
	int tx = 10 + a, ty = 20 - sa;
	// di len
	for(int j=0; j < 12 - sa; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[a-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(20, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty--;
		SetBGColor(BLACK);
	}
	// di ngang
	for(int j=0; j < 25; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[a-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<" ";
		tx++;
		SetBGColor(BLACK);
	}
	// di xuong
	for(int j=0; j < 12 - sb; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[a-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(45, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty++;
	}	
	gotoxy(tx, ty-1);
	SetBGColor(RED);
	cout<<s[a-1];
	SetBGColor(BLACK);
}
void ThucHienAC(int n, int sa, int sc, int a, int c){
	int tx= 10 + a, ty = 20 - sa;
	// di len
	for(int j=0; j < 12 - sa; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[a-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(20, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty--;
		SetBGColor(BLACK);
	}
	// di ngang
	for(int j=0; j < 50; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[a-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<" ";
		tx++;
		SetBGColor(BLACK);
	}
	// di xuong
	for(int j=0; j < 12 - sc; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[a-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(70, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty++;
	}	
	gotoxy(tx, ty-1);
	SetBGColor(RED);
	cout<<s[a-1];
	SetBGColor(BLACK);
}
void ThucHienBC(int n, int sb, int sc, int b, int c){
	int tx= 35 + b, ty = 20 - sb;
	// di len
	for(int j=0; j < 12 - sb; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[b-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(45, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty--;
		SetBGColor(BLACK);
	}
	// di ngang
	for(int j=0; j < 25; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[b-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<" ";
		tx++;
		SetBGColor(BLACK);
	}
	// di xuong
	for(int j=0; j < 12 - sc; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[b-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(70, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty++;
	}	
	gotoxy(tx, ty-1);
	SetBGColor(RED);
	cout<<s[b-1];
	SetBGColor(BLACK);
}
void ThucHienBA(int n, int sb, int sa, int b, int a){
	int tx= 35 + b, ty = 20 - sb;
	// di len
	for(int j=0; j < 12 - sb; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[b-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(45, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty--;
		SetBGColor(BLACK);
	}
	// di ngang
	for(int j=0; j < 25; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[b-1];
		Sleep(100);
		gotoxy(tx + s[b-1].size(), ty);
		SetBGColor(BLACK);
		cout<<" ";
		tx--;
		SetBGColor(BLACK);
	}
	// di xuong
	for(int j=0; j < 12 - sa; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[b-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(20, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty++;
	}	
	gotoxy(tx, ty-1);
	SetBGColor(RED);
	cout<<s[b-1];
	SetBGColor(BLACK);
}
void ThucHienCB(int n, int sc, int sb, int c, int b){
	int tx= 60 + c, ty = 20 - sc;
	// di len
	for(int j=0; j < 12 - sc; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[c-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(70, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty--;
		SetBGColor(BLACK);
	}
	// di ngang
	for(int j=0; j < 25; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[c-1];
		Sleep(100);
		gotoxy(tx + s[c-1].size(), ty);
		SetBGColor(BLACK);
		cout<<" ";
		tx--;
		SetBGColor(BLACK);
	}
	// di xuong
	for(int j=0; j < 12 - sb; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[c-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(45, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty++;
	}	
	gotoxy(tx, ty-1);
	SetBGColor(RED);
	cout<<s[c-1];
	SetBGColor(BLACK);
}
void ThucHienCA(int n, int sc, int sa, int c, int a){
	int tx= 60 + c, ty = 20 - sc;
	// di len
	for(int j=0; j < 12 - sc; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[c-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(70, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty--;
		SetBGColor(BLACK);
	}
	// di ngang
	for(int j=0; j < 50; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[c-1];
		Sleep(100);
		gotoxy(tx + s[c-1].size(), ty);
		SetBGColor(BLACK);
		cout<<" ";
		tx--;
		SetBGColor(BLACK);
	}
	// di xuong
	for(int j=0; j < 12 - sa; j++){
		SetBGColor(RED);
		gotoxy(tx, ty);
		cout<<s[c-1];
		Sleep(100);
		gotoxy(tx, ty);
		SetBGColor(BLACK);
		cout<<"                      ";
		if(ty >= 10){
			gotoxy(20, ty);
			SetBGColor(GREEN);
			cout<<"  ";
		}
		ty++;
	}	
	gotoxy(tx, ty-1);
	SetBGColor(RED);
	cout<<s[c-1];
	SetBGColor(BLACK);
}
int main (){
	int n, sa, sb, sc;// n la so luong dia, count la so lan thay doi dia
	gotoxy(35, 2);
	cout<<"Nhap vao so luong dia(1 <= n <= 7): "; cin>>n;
	int A[n+1], B[n+1]={0}, C[n+1]={0};
	for(int i=1; i<=n; i++){
		A[i] = i;
	}
	sa = n; sb = sc = 0;
	ThuatToan(n, "a", "b", "c");
	gotoxy(2, 5);
	for(int i=0; i<89; i++) cout<<"=";
	gotoxy(2, 6);
	for(int i=0; i<20; i++) {
		gotoxy(2, 6+i);
		cout<<"||\n";
	}
	
	gotoxy(89, 6);
	for(int i=0; i<20; i++) {
		gotoxy(89, 6+i);
		cout<<"||\n";
	}
	gotoxy(2, 25);
	for(int i=0; i<89; i++) cout<<"=";
	VeCot();
	VeDia(n);
	for(int i=1; i<=c; i++){
		if(d[i] == "ab"){
			ThucHienAB(n, sa, sb, A[sa], B[sb]);
			sb++;
			B[sb] = A[sa];
			sa--;
		}
		else if(d[i] == "ac"){
			ThucHienAC(n, sa, sc, A[sa], C[sc]);
			sc++;
			C[sc] = A[sa];
			sa--;
		}
		else if(d[i] == "bc"){
			ThucHienBC(n, sb, sc, B[sb], C[sc]);
			sc++;
			C[sc] = B[sb];
			sb--;
		}
		else if(d[i] == "ba"){
			ThucHienBA(n, sb, sa, B[sb], A[sa]);
			sa++;
			A[sa] = B[sb];
			sb--;
		}
		else if(d[i] == "ca"){
			ThucHienCA(n, sc, sa, C[sc], A[sa]);
			sa++;
			A[sa] = C[sc];
			sc--;
		}
		else if(d[i] == "cb"){
			ThucHienCB(n, sc, sb, C[sc], B[sb]);
			sb++;
			B[sb] = C[sc];
			sc--;
		}
	}
	gotoxy(0, 26);
	sleep(2);
	SetBGColor(BLACK);
	return 0;
}
