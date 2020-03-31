// ConsoleApplication34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
#include "fonksiyonlar.h"

int main()
{
	int sira = 1;
	int atistabakasi[10][10] = {};
	int atistabakasipc[10][10] = {};
	int oyuncumatris[10][10] = {};
	int botmatris[10][10] = {};
	menu(oyuncumatris,botmatris,atistabakasi,atistabakasipc,sira);
	
	return 0;
}

