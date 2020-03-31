#pragma once

void gemialma(int oyuncumatris[10][10]);
int menu(int oyuncumatris[10][10], int botmatris[10][10], int atistabakasi[10][10], int atistabakasipc[10][10], int sira);
int botgemiyerlestirme(int botmatris[10][10]);
int oyuncuvurma(int atistabakasi[10][10], int botmatris[10][10], int oyuncumatris[10][10], int sira);
int bilgisayarvurma(int atistabakasipc[10][10], int oyuncumatris[10][10], int sira);
void sirakimde(int atistabakasi[10][10], int botmatris[10][10], int atistabakasipc[10][10], int oyuncumatris[10][10], int sira);
void nasiloynanir(int oyuncumatris[10][10], int botmatris[10][10], int atistabakasi[10][10], int atistabakasipc[10][10], int sira);
void yapimcilar(int oyuncumatris[10][10], int botmatris[10][10], int atistabakasi[10][10], int atistabakasipc[10][10], int sira);




