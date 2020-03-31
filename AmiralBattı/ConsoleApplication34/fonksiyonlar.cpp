#include "stdafx.h"
#include "fonksiyonlar.h"
using namespace std;
#include "iostream"
#include <stdlib.h>
#include "time.h"
void gemialma(int oyuncumatris[10][10])
{

	int a = 5;
	
	// GEMILERI 5 DEN 2 BOYUTA KADAR ALDIRMAYI SAGLAYAN DONGU.
	for (a; a > 1; a--) {
		// DONGU ICERISINDE KULLANDIGIMIZ DEGISKENLER YATAYMIDIKEYMI MENU DEGISKENI YATAYDEGER SATIR DÜSEYDEGER SUTUN ANLAMINDA KULLANILDI.
		int pcmatris[10][10];
		int yataymidikeymi = 0;
		int yataydeger = 0;
		int düseydeger = 0;
		int b = 2;
		int c = 1;

		// KULLANICIYA YATAY MI DIKEYMI YERLESTIRMEK ISTEDIGINI SORDUGUMUZ KISIM.
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                             GUNCEL OYUN TABAKANIZ                     " << endl;
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
		cout << "                                              _____________________" << endl;
		for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
			switch (sayac1) {
			case 9:
				cout << "                                           " << sayac1 + 1 << "| ";
				break;
			default:
				cout << "                                           " << sayac1 + 1 << " | ";
				break;
			}
			for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
				cout << oyuncumatris[sayac1][sayac2] << " ";


			}
			cout << "|" << endl;
		}
		cout << "                    ___________________________________________________________________________" << endl << endl;
		cout << "                       " << a << " BOYUTLU GEMINIZI YERLESTIRMEK ICIN ASAGIDAKI MENUDEN ISLEM SECINIZ . " << endl;
		cout << "                    ___________________________________________________________________________" << endl << endl;
		cout << "                     1 - ) YATAY YERLESTIRMEK ISTIYORUM." << endl << endl;
		cout << "                     2 - ) DIKEY YERLESTIRMEK ISTIYORUM." << endl << endl;
		cout << "                                                     SECIMINIZ  :  ";
		cin >> yataymidikeymi;
		system("CLS");
		while (yataymidikeymi > 2 || yataymidikeymi <= 0) {
			cout << "              ___________________________________________________________________________" << endl << endl;
			cout << "                                    !! YANLIS BIR DEGER GIRDINIZ !! " << endl << endl;
			cout << "              ___________________________________________________________________________" << endl << endl << endl;
			cout << a << " BOYUTLU GEMINIZI YERLESTIRMEK ICIN ASAGIDAKI MENUDEN ISLEM SECINIZ . " << endl << endl;
			cout << " 1 - ) YATAY YERLESTIRMEK ISTIYORUM." << endl << endl;
			cout << " 2 - ) DIKEY YERLESTIRMEK ISTIYORUM." << endl << endl;
			cout << "SECIMINIZ  :  ";
			cin >> yataymidikeymi;
			system("CLS");

		}

		// KULLANICIDAN ALDIGIMIZ YATAYMIDIKEYMI DEGISKENINE GORE MENU SECIMI YAPILDIGI KISIM.
		switch (yataymidikeymi) {
			// GEMILER YATAY GIRILECEKSE CASE 1 E GIRIYOR.
		case 1: {
			// WHILE DONGUSU ETRAFINDA GEMI OLUP OLMADIGINI KONTROL EDIYOR DIGER KISIMLAR KULLANICIDAN GIRECEGI GEMININ KONUMUNU ALIYOR.
			while (b != 0) {
				cout << "                           ___________________________________________________________" << endl << endl;
				cout << "                                                GUNCEL OYUN TABAKANIZ                     " << endl;
				cout << "                           ___________________________________________________________" << endl << endl;
				cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "                                              _____________________" << endl;
				for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
					switch (sayac1) {
					case 9:
						cout << "                                           " << sayac1 + 1 << "| ";
						break;
					default:
						cout << "                                           " << sayac1 + 1 << " | ";
						break;
					}
					for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
						cout << oyuncumatris[sayac1][sayac2] << " ";


					}
					cout << "|" << endl;
				}
				cout << "                   _________________________________________________________________________________" << endl << endl;
				cout << "                                  KACINCI SATIRA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
				cout << "                   _________________________________________________________________________________" << endl << endl << endl;
				cout << "                                                    SECIMINIZ : ";
				cin >> yataydeger;
				system("CLS");
				if (yataydeger > 10 || yataydeger < 1) {
					cout << "                              LUTFEN 0 DAN BUYUK 11 DEN KUCUK BIR DEGER GIRINIZ : " << endl;
					cout << "               _________________________________________________________________________________" << endl << endl;
					cout << "                          KACINCI SATIRA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
					cout << "               _________________________________________________________________________________" << endl;
					cout << "                                               SECIMINIZ : ";
					cin >> yataydeger;
				}
				cout << "                           ___________________________________________________________" << endl << endl;
				cout << "                                                GUNCEL OYUN TABAKANIZ                     " << endl;
				cout << "                           ___________________________________________________________" << endl << endl;
				cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "                                              _____________________" << endl;
				for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
					switch (sayac1) {
					case 9:
						cout << "                                           " << sayac1 + 1 << "| ";
						break;
					default:
						cout << "                                           " << sayac1 + 1 << " | ";
						break;
					}
					for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
						cout << oyuncumatris[sayac1][sayac2] << " ";


					}
					cout << "|" << endl;
				}
				cout << "                   __________________________________________________________________________________" << endl << endl;
				cout << "                          YERLESTIRMEYE KACINCI SUTUNDAN BASLAMAK ISTEDIGINIZI GIRINIZ " << endl << endl;
				cout << "                   ___________________________________________________________________________________" << endl<<endl<<endl;
				cout << "                                                   SECIMINIZ : ";
				cin >> düseydeger;

				while (düseydeger > 11 - a || düseydeger < 0) {
					cout << "          _________________________________________________________________________________" << endl << endl;
					cout << "                         LUTFEN " << 10 - a + 1 << " VE " << 10 - a + 1 << " DAN KUCUK VE 0 DAN BUYUK DEGER GIRINIZ  " << endl;
					cout << "          _________________________________________________________________________________" << endl << endl << endl;
					cout << "DEGER : ";
					cin >> düseydeger;
				}
				b = 0;
				int kontrol1 = yataydeger - 2;
				int bitis1 = yataydeger;
				for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
					int kontrol2 = düseydeger - 2;
					int bitis2 = düseydeger - 1 + a;
					cout << endl;
					for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
						if (oyuncumatris[kontrol1][kontrol2] == 3) {
							b = b + 1;
							cout << " ____________________________________________________________________________________________" << endl << endl;
							cout << "                                   HATALI GIRIS YAPTINIZ TEKRAR DENEYINIZ !! " << endl << endl;
							cout << " ____________________________________________________________________________________________" << endl;
							cout << "                        ___________________________________________________________" << endl << endl;
							cout << "                                             GUNCEL OYUN TABAKANIZ                     " << endl;
							cout << "                        ___________________________________________________________" << endl << endl;
							cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
							cout << "                                              _____________________" << endl;
							for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
								switch (sayac1) {
								case 9:
									cout << "                                           " << sayac1 + 1 << "| ";
									break;
								default:
									cout << "                                           " << sayac1 + 1 << " | ";
									break;
								}
								for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
									cout << oyuncumatris[sayac1][sayac2] << " ";

								}
								cout << "|" << endl;
							}

							break;

						}
					}

				}
			}





			// GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
			düseydeger = düseydeger - 1;
			yataydeger = yataydeger - 1;
			int sayac3 = düseydeger + a;
			for (düseydeger; düseydeger < sayac3; düseydeger++) {
				oyuncumatris[yataydeger][düseydeger] = 3;
			}
			cout << endl << endl;


			break;
		}
				// GEMILER DIKEY GIRILECEKSE CASE 2 YE GIRILIYOR.
		case 2: {
			while (b != 0) {
				cout << "          _________________________________________________________________________________" << endl << endl;
				cout << "                          KACINCI SUTUNA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
				cout << "          _________________________________________________________________________________" << endl << endl << endl;
				cout << "                                          SECIMINIZ : ";
				cin >> düseydeger;
				system("CLS");
				if (düseydeger > 10 || düseydeger < 1) {
					cout << "                         LUTFEN 0 DAN BUYUK 11 DEN KUCUK BIR DEGER GIRINIZ : " << endl;
					cout << "          _________________________________________________________________________________" << endl << endl;
					cout << "                          KACINCI SUTUNA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
					cout << "          _________________________________________________________________________________" << endl << endl << endl;
					cout << "                                          SECIMINIZ : ";
					cin >> düseydeger;
				}
				cout << " ____________________________________________________________________________________________" << endl << endl;
				cout << "                     YERLESTIRMEYE KACINCI SATIRDAN BASLAMAK ISTEDIGINIZI GIRINIZ " << endl << endl;
				cout << " ____________________________________________________________________________________________" << endl << endl << endl;
				cout << "                                          SECIMINIZ : ";
				cin >> yataydeger;

				while (yataydeger > 11 - a || yataydeger < 0) {
					cout << "          _________________________________________________________________________________" << endl << endl;
					cout << "                       LUTFEN " << 10 - a + 1 << " VE " << 10 - a + 1 << " DAN KUCUK VE 0 DAN BUYUK DEGER GIRINIZ  " << endl;
					cout << "          _________________________________________________________________________________" << endl << endl << endl;
					cout << "DEGER : ";
					cin >> yataydeger;
				}
				b = 0;
				int kontrol1 = yataydeger - 2;
				int bitis1 = yataydeger + a - 1;
				for (kontrol1; kontrol1 <= bitis1 && b != 1; kontrol1++) {
					int kontrol2 = düseydeger - 2;
					int bitis2 = düseydeger;
					cout << endl;
					for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
						if (oyuncumatris[kontrol1][kontrol2] == 3) {
							b = b + 1;
							cout << " ____________________________________________________________________________________________" << endl << endl;
							cout << "                                    HATALI GIRIS YAPTINIZ TEKRAR DENEYINIZ !! " << endl << endl;
							cout << " ____________________________________________________________________________________________" << endl << endl;
							cout << "                        ___________________________________________________________" << endl << endl;
							cout << "                                             GUNCEL OYUN TABAKANIZ                     " << endl;
							cout << "                        ___________________________________________________________" << endl << endl;
							cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
							cout << "                                              _____________________" << endl;
							for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
								switch (sayac1) {
								case 9:
									cout << "                                           " << sayac1 + 1 << "| ";
									break;
								default:
									cout << "                                           " << sayac1 + 1 << " | ";
									break;
								}
								for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
									cout << oyuncumatris[sayac1][sayac2] << " ";

								}
								cout << "|" << endl;
							}

							break;

						}

					}

				}
			}





			// GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
			düseydeger = düseydeger - 1;
			yataydeger = yataydeger - 1;
			int sayac3 = yataydeger + a;
			for (yataydeger; yataydeger < sayac3; yataydeger++) {
				oyuncumatris[yataydeger][düseydeger] = 3;
			}
			cout << endl << endl;


			break;
		}
		}
		// OYUN TAHTASINI EKRANA YAZDIRAN KISIM.
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                             GUNCEL OYUN TABAKANIZ                     " << endl;
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
		cout << "                                              _____________________" << endl;
		for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
			switch (sayac1) {
			case 9:
				cout << "                                           " << sayac1 + 1 << "| ";
				break;
			default:
				cout << "                                           " << sayac1 + 1 << " | ";
				break;
			}
			for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
				cout << oyuncumatris[sayac1][sayac2] << " ";

			}
			cout << "|" << endl;
		}
		cout << endl << endl << endl;
	}
	 {
	 // DONGU ICERISINDE KULLANDIGIMIZ DEGISKENLER YATAYMIDIKEYMI MENU DEGISKENI YATAYDEGER SATIR DÜSEYDEGER SUTUN ANLAMINDA KULLANILDI.
	 // 3 BOYUTLU GEMIYI TEKRAR ALDIRDIGIMIZ KISIM ;
	 int pcmatris[10][10];
	 int yataymidikeymi = 0;
	 int yataydeger = 0;
	 int düseydeger = 0;
	 int b = 2;
	 int c = 1;
	 a = 3;
	 cout << "                           ___________________________________________________________" << endl << endl;
	 cout << "                                                GUNCEL OYUN TABAKANIZ                     " << endl;
	 cout << "                           ___________________________________________________________" << endl << endl;
	 cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
	 cout << "                                              _____________________" << endl;
	 for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
		 switch (sayac1) {
		 case 9:
			 cout << "                                           " << sayac1 + 1 << "| ";
			 break;
		 default:
			 cout << "                                           " << sayac1 + 1 << " | ";
			 break;
		 }
		 for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
			 cout << oyuncumatris[sayac1][sayac2] << " ";


		 }
		 cout << "|" << endl;
	 }
	 cout << "                    ___________________________________________________________________________" << endl << endl;
	 cout << "                       " << a << " BOYUTLU GEMINIZI YERLESTIRMEK ICIN ASAGIDAKI MENUDEN ISLEM SECINIZ . " << endl;
	 cout << "                    ___________________________________________________________________________" << endl << endl;
	 cout << "                     1 - ) YATAY YERLESTIRMEK ISTIYORUM." << endl << endl;
	 cout << "                     2 - ) DIKEY YERLESTIRMEK ISTIYORUM." << endl << endl;
	 cout << "                                                   SECIMINIZ  :  ";
	 cin >> yataymidikeymi;
	 system("CLS");
	 while (yataymidikeymi > 2 || yataymidikeymi <= 0) {
		 cout << "              ___________________________________________________________________________" << endl << endl;
		 cout << "                                    !! YANLIS BIR DEGER GIRDINIZ !! " << endl << endl;
		 cout << "              ___________________________________________________________________________" << endl << endl << endl;
		 cout << a << " BOYUTLU GEMINIZI YERLESTIRMEK ICIN ASAGIDAKI MENUDEN ISLEM SECINIZ . " << endl << endl;
		 cout << "              1 - ) YATAY YERLESTIRMEK ISTIYORUM." << endl << endl;
		 cout << "              2 - ) DIKEY YERLESTIRMEK ISTIYORUM." << endl << endl;
		 cout << "SECIMINIZ  :  ";
		 cin >> yataymidikeymi;
		 system("CLS");

	 }

	 // KULLANICIDAN ALDIGIMIZ YATAYMIDIKEYMI DEGISKENINE GORE MENU SECIMI YAPILDIGI KISIM.
	 switch (yataymidikeymi) {
		 // GEMILER YATAY GIRILECEKSE CASE 1 E GIRIYOR.
	 case 1: {
		 // WHILE DONGUSU ETRAFINDA GEMI OLUP OLMADIGINI KONTROL EDIYOR DIGER KISIMLAR KULLANICIDAN GIRECEGI GEMININ KONUMUNU ALIYOR.
		 while (b != 0) {
			 cout << "                           ___________________________________________________________" << endl << endl;
			 cout << "                                                GUNCEL OYUN TABAKANIZ                     " << endl;
			 cout << "                           ___________________________________________________________" << endl << endl;
			 cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
			 cout << "                                              _____________________" << endl;
			 for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
				 switch (sayac1) {
				 case 9:
					 cout << "                                           " << sayac1 + 1 << "| ";
					 break;
				 default:
					 cout << "                                           " << sayac1 + 1 << " | ";
					 break;
				 }
				 for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
					 cout << oyuncumatris[sayac1][sayac2] << " ";


				 }
				 cout << "|" << endl;
			 }
			 cout << "          _________________________________________________________________________________" << endl << endl;
			 cout << "                          KACINCI SATIRA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
			 cout << "          _________________________________________________________________________________" << endl << endl << endl;
			 cout << "                                          SECIMINIZ : ";
			 cin >> yataydeger;
			 system("CLS");
			 if (yataydeger > 10 || yataydeger < 1) {
				 cout << "                         LUTFEN 0 DAN BUYUK 11 DEN KUCUK BIR DEGER GIRINIZ : " << endl;
				 cout << "          _________________________________________________________________________________" << endl << endl;
				 cout << "                          KACINCI SATIRA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
				 cout << "          _________________________________________________________________________________" << endl;
				 cout << "                                          SECIMINIZ : ";
				 cin >> yataydeger;
			 }
			 cout << "                           ___________________________________________________________" << endl << endl;
			 cout << "                                                GUNCEL OYUN TABAKANIZ                     " << endl;
			 cout << "                           ___________________________________________________________" << endl << endl;
			 cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
			 cout << "                                              _____________________" << endl;
			 for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
				 switch (sayac1) {
				 case 9:
					 cout << "                                           " << sayac1 + 1 << "| ";
					 break;
				 default:
					 cout << "                                           " << sayac1 + 1 << " | ";
					 break;
				 }
				 for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
					 cout << oyuncumatris[sayac1][sayac2] << " ";


				 }
				 cout << "|" << endl;
			 }
			 cout << " ____________________________________________________________________________________________" << endl << endl;
			 cout << "                     YERLESTIRMEYE KACINCI SUTUNDAN BASLAMAK ISTEDIGINIZI GIRINIZ " << endl << endl;
			 cout << " ____________________________________________________________________________________________" << endl;
			 cout << "                                          SECIMINIZ : ";
			 cin >> düseydeger;

			 while (düseydeger > 11 - a || düseydeger < 0) {
				 cout << "          _________________________________________________________________________________" << endl << endl;
				 cout << "                         LUTFEN " << 10 - a + 1 << " VE " << 10 - a + 1 << " DAN KUCUK VE 0 DAN BUYUK DEGER GIRINIZ  " << endl;
				 cout << "          _________________________________________________________________________________" << endl << endl << endl;
				 cout << "DEGER : ";
				 cin >> düseydeger;
			 }
			 b = 0;
			 int kontrol1 = yataydeger - 2;
			 int bitis1 = yataydeger;
			 for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
				 int kontrol2 = düseydeger - 2;
				 int bitis2 = düseydeger - 1 + a;
				 cout << endl;
				 for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
					 if (oyuncumatris[kontrol1][kontrol2] == 3) {
						 b = b + 1;
						 cout << " ____________________________________________________________________________________________" << endl << endl;
						 cout << "                                   HATALI GIRIS YAPTINIZ TEKRAR DENEYINIZ !! " << endl << endl;
						 cout << " ____________________________________________________________________________________________" << endl;
						 cout << "                        ___________________________________________________________" << endl << endl;
						 cout << "                                             GUNCEL OYUN TABAKANIZ                     " << endl;
						 cout << "                        ___________________________________________________________" << endl << endl;
						 cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
						 cout << "                                              _____________________" << endl;
						 for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
							 switch (sayac1) {
							 case 9:
								 cout << "                                           " << sayac1 + 1 << "| ";
								 break;
							 default:
								 cout << "                                           " << sayac1 + 1 << " | ";
								 break;
							 }
							 for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
								 cout << oyuncumatris[sayac1][sayac2] << " ";

							 }
							 cout << "|" << endl;
						 }

						 break;

					 }
				 }

			 }
		 }





		 // GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
		 düseydeger = düseydeger - 1;
		 yataydeger = yataydeger - 1;
		 int sayac3 = düseydeger + a;
		 for (düseydeger; düseydeger < sayac3; düseydeger++) {
			 oyuncumatris[yataydeger][düseydeger] = 3;
		 }
		 cout << endl << endl;


		 break;
	 }
			 // GEMILER DIKEY GIRILECEKSE CASE 2 YE GIRILIYOR.
	 case 2: {
		 while (b != 0) {
			 cout << "          _________________________________________________________________________________" << endl << endl;
			 cout << "                          KACINCI SUTUNA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
			 cout << "          _________________________________________________________________________________" << endl << endl << endl;
			 cout << "                                          SECIMINIZ : ";
			 cin >> düseydeger;
			 system("CLS");
			 if (düseydeger > 10 || düseydeger < 1) {
				 cout << "                         LUTFEN 0 DAN BUYUK 11 DEN KUCUK BIR DEGER GIRINIZ : " << endl;
				 cout << "          _________________________________________________________________________________" << endl << endl;
				 cout << "                          KACINCI SUTUNA YERLESTIRMEK ISTEDIGINIZI GIRINIZ " << endl << endl;
				 cout << "          _________________________________________________________________________________" << endl << endl << endl;
				 cout << "                                          SECIMINIZ : ";
				 cin >> düseydeger;
			 }
			 cout << " ____________________________________________________________________________________________" << endl << endl;
			 cout << "                     YERLESTIRMEYE KACINCI SATIRDAN BASLAMAK ISTEDIGINIZI GIRINIZ " << endl << endl;
			 cout << " ____________________________________________________________________________________________" << endl << endl << endl;
			 cout << "                                          SECIMINIZ : ";
			 cin >> yataydeger;

			 while (yataydeger > 11 - a || yataydeger < 0) {
				 cout << "          _________________________________________________________________________________" << endl << endl;
				 cout << "                       LUTFEN " << 10 - a + 1 << " VE " << 10 - a + 1 << " DAN KUCUK VE 0 DAN BUYUK DEGER GIRINIZ  " << endl;
				 cout << "          _________________________________________________________________________________" << endl << endl << endl;
				 cout << "DEGER : ";
				 cin >> yataydeger;
			 }
			 b = 0;
			 int kontrol1 = yataydeger - 2;
			 int bitis1 = yataydeger + a - 1;
			 for (kontrol1; kontrol1 <= bitis1 && b != 1; kontrol1++) {
				 int kontrol2 = düseydeger - 2;
				 int bitis2 = düseydeger;
				 cout << endl;
				 for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
					 if (oyuncumatris[kontrol1][kontrol2] == 3) {
						 b = b + 1;
						 cout << " ____________________________________________________________________________________________" << endl << endl;
						 cout << "                                    HATALI GIRIS YAPTINIZ TEKRAR DENEYINIZ !! " << endl << endl;
						 cout << " ____________________________________________________________________________________________" << endl << endl;
						 cout << "                        ___________________________________________________________" << endl << endl;
						 cout << "                                             GUNCEL OYUN TABAKANIZ                     " << endl;
						 cout << "                        ___________________________________________________________" << endl << endl;
						 cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
						 cout << "                                              _____________________" << endl;
						 for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
							 switch (sayac1) {
							 case 9:
								 cout << "                                           " << sayac1 + 1 << "| ";
								 break;
							 default:
								 cout << "                                           " << sayac1 + 1 << " | ";
								 break;
							 }
							 for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
								 cout << oyuncumatris[sayac1][sayac2] << " ";

							 }
							 cout << "|" << endl;
						 }

						 break;

					 }

				 }

			 }
		 }





		 // GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
		 düseydeger = düseydeger - 1;
		 yataydeger = yataydeger - 1;
		 int sayac3 = yataydeger + a;
		 for (yataydeger; yataydeger < sayac3; yataydeger++) {
			 oyuncumatris[yataydeger][düseydeger] = 3;
		 }
		 cout << endl << endl;


		 break;
	 }
	 }
	 // OYUN TAHTASINI EKRANA YAZDIRAN KISIM.
	 cout << "                        ___________________________________________________________" << endl << endl;
	 cout << "                                             GUNCEL OYUN TABAKANIZ                     " << endl;
	 cout << "                        ___________________________________________________________" << endl << endl;
	 cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
	 cout << "                                              _____________________" << endl;
	 for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
		 switch (sayac1) {
		 case 9:
			 cout << "                                           " << sayac1 + 1 << "| ";
			 break;
		 default:
			 cout << "                                           " << sayac1 + 1 << " | ";
			 break;
		 }
		 for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
			 cout << oyuncumatris[sayac1][sayac2] << " ";

		 }
		 cout << "|" << endl;
	 }
	 cout << endl << endl << endl;
	}
}
	


int menu(int oyuncumatris[10][10],int botmatris[10][10],int atistabakasi[10][10],int atistabakasipc[10][10],int sira)
{
	int secim = 0;
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                          AMIRAL BATTI OYUNUNA HOSGELDINIZ             " << endl;
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                                   OYUN MENUSU                          " << endl;
	
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                              LUTFEN SECIMINIZI GIRINIZ            " << endl;
	cout << "                              _________________________________________________________" << endl << endl;
	cout <<"                               1 -) OYUNU BASLAT" << endl;
	cout <<"                               2 -) NASIL OYNANIR ?" << endl;
	cout <<"                               3 -) YAPIMCILAR" << endl << endl << endl;
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                                     SECIMINIZ :  ";
	cin >> secim;
	cout << endl;
	cout << "                              _________________________________________________________" << endl << endl;
	
	
	system("CLS");
	while (secim > 3 || secim < 1) {
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                          AMIRAL BATTI OYUNUNA HOSGELDINIZ             " << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                   OYUN MENUSU                          " << endl;

		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                              LUTFEN SECIMINIZI GIRINIZ            " << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                               1 -) OYUNU BASLAT" << endl;
		cout << "                               2 -) NASIL OYNANIR ?" << endl;
		cout << "                               3 -) YAPIMCILAR" << endl << endl << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                              YANLIS BIR DEGER GIRDINIZ              " << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                     SECIMINIZ :  ";
		cin >> secim;
		system("CLS");
	}

	switch (secim) {

	case 1: {
		gemialma(oyuncumatris);
		botgemiyerlestirme(botmatris);
		sirakimde(atistabakasi, botmatris, atistabakasipc, oyuncumatris, sira);
		return oyuncumatris[10][10];
		break;
	}
	case 2: {
		nasiloynanir(oyuncumatris, botmatris, atistabakasi, atistabakasipc, sira);
		return 0;
		break;
	}
	case 3: {

		yapimcilar(oyuncumatris, botmatris, atistabakasi, atistabakasipc, sira);
		break;
	}

	}

}

int botgemiyerlestirme(int botmatris[10][10])
{
	srand(time(NULL));
	int a = 5;
	// GEMILERI 5 DEN 2 BOYUTA KADAR ALDIRMAYI SAGLAYAN DONGU.
	for (a; a > 1; a--) {
		// DONGU ICERISINDE KULLANDIGIMIZ DEGISKENLER YATAYMIDIKEYMI MENU DEGISKENI YATAYDEGER SATIR DÜSEYDEGER SUTUN ANLAMINDA KULLANILDI.
		int pcmatris[10][10];
		int yataymidikeymi = 0;
		int yataydeger = 0;
		int düseydeger = 0;
		int b = 2;
		int c = 1;

		// KULLANICIYA YATAY MI DIKEYMI YERLESTIRMEK ISTEDIGINI SORDUGUMUZ KISIM.
	
		
		yataymidikeymi = rand() % 2 + 1;
	


		// KULLANICIDAN ALDIGIMIZ YATAYMIDIKEYMI DEGISKENINE GORE MENU SECIMI YAPILDIGI KISIM.
		switch (yataymidikeymi) {
			// GEMILER YATAY GIRILECEKSE CASE 1 E GIRIYOR.
		case 1: {
			// WHILE DONGUSU ETRAFINDA GEMI OLUP OLMADIGINI KONTROL EDIYOR DIGER KISIMLAR KULLANICIDAN GIRECEGI GEMININ KONUMUNU ALIYOR.
			while (b != 0) {
				yataydeger = rand() % 10 + 1;		
			
			
				
				düseydeger = rand() % 10 + 1;

				while (düseydeger > 11 - a || düseydeger < 0) {
					düseydeger = rand() % 10 + 1;
				}
				b = 0;
				int kontrol1 = yataydeger - 2;
				int bitis1 = yataydeger;
				for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
					int kontrol2 = düseydeger - 2;
					int bitis2 = düseydeger - 1 + a;
					cout << endl;
					for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
						if (botmatris[kontrol1][kontrol2] == 3) {
							b = b + 1;						
							break;

						}
					}

				}
			}





			// GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
			düseydeger = düseydeger - 1;
			yataydeger = yataydeger - 1;
			int sayac3 = düseydeger + a;
			for (düseydeger; düseydeger < sayac3; düseydeger++) {
				botmatris[yataydeger][düseydeger] = 3;
			}
			cout << endl << endl;


			break;
		}
				// GEMILER DIKEY GIRILECEKSE CASE 2 YE GIRILIYOR.
		case 2: {
			while (b != 0) {
				
				düseydeger = rand() % 10 + 1;
		
				
				yataydeger = rand() % 10 + 1;

				while (yataydeger > 11 - a || yataydeger < 0) {
					yataydeger = rand() % 10 + 1;
				}
				b = 0;
				int kontrol1 = yataydeger - 2;
				int bitis1 = yataydeger + a - 1;
				for (kontrol1; kontrol1 <= bitis1 && b != 1; kontrol1++) {
					int kontrol2 = düseydeger - 2;
					int bitis2 = düseydeger;
					cout << endl;
					for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
						if (botmatris[kontrol1][kontrol2] == 3) {
							b = b + 1;
							break;

						}

					}

				}
			}





			// GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
			düseydeger = düseydeger - 1;
			yataydeger = yataydeger - 1;
			int sayac3 = yataydeger + a;
			for (yataydeger; yataydeger < sayac3; yataydeger++) {
				botmatris[yataydeger][düseydeger] = 3;
			}
		


			break;
		}
		}
		
	}
	 {
	 // DONGU ICERISINDE KULLANDIGIMIZ DEGISKENLER YATAYMIDIKEYMI MENU DEGISKENI YATAYDEGER SATIR DÜSEYDEGER SUTUN ANLAMINDA KULLANILDI.
	 int pcmatris[10][10];
	 int yataymidikeymi = 0;
	 int yataydeger = 0;
	 int düseydeger = 0;
	 int b = 2;
	 int c = 1;
	 int a = 3;
	 // KULLANICIYA YATAY MI DIKEYMI YERLESTIRMEK ISTEDIGINI SORDUGUMUZ KISIM.


	 yataymidikeymi = rand() % 2 + 1;



	 // KULLANICIDAN ALDIGIMIZ YATAYMIDIKEYMI DEGISKENINE GORE MENU SECIMI YAPILDIGI KISIM.
	 switch (yataymidikeymi) {
		 // GEMILER YATAY GIRILECEKSE CASE 1 E GIRIYOR.
	 case 1: {
		 // WHILE DONGUSU ETRAFINDA GEMI OLUP OLMADIGINI KONTROL EDIYOR DIGER KISIMLAR KULLANICIDAN GIRECEGI GEMININ KONUMUNU ALIYOR.
		 while (b != 0) {
			 yataydeger = rand() % 10 + 1;



			 düseydeger = rand() % 10 + 1;

			 while (düseydeger > 11 - a || düseydeger < 0) {
				 düseydeger = rand() % 10 + 1;
			 }
			 b = 0;
			 int kontrol1 = yataydeger - 2;
			 int bitis1 = yataydeger;
			 for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
				 int kontrol2 = düseydeger - 2;
				 int bitis2 = düseydeger - 1 + a;
				 cout << endl;
				 for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
					 if (botmatris[kontrol1][kontrol2] == 3) {
						 b = b + 1;
						 break;

					 }
				 }

			 }
		 }





		 // GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
		 düseydeger = düseydeger - 1;
		 yataydeger = yataydeger - 1;
		 int sayac3 = düseydeger + a;
		 for (düseydeger; düseydeger < sayac3; düseydeger++) {
			 botmatris[yataydeger][düseydeger] = 3;
		 }
		 cout << endl << endl;


		 break;
	 }
			 // GEMILER DIKEY GIRILECEKSE CASE 2 YE GIRILIYOR.
	 case 2: {
		 while (b != 0) {

			 düseydeger = rand() % 10 + 1;


			 yataydeger = rand() % 10 + 1;

			 while (yataydeger > 11 - a || yataydeger < 0) {
				 yataydeger = rand() % 10 + 1;
			 }
			 b = 0;
			 int kontrol1 = yataydeger - 2;
			 int bitis1 = yataydeger + a - 1;
			 for (kontrol1; kontrol1 <= bitis1 && b != 1; kontrol1++) {
				 int kontrol2 = düseydeger - 2;
				 int bitis2 = düseydeger;
				 cout << endl;
				 for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
					 if (botmatris[kontrol1][kontrol2] == 3) {
						 b = b + 1;
						 break;

					 }

				 }

			 }
		 }





		 // GIRILEN GEMIYI OYUN TAHTASINA ISLEYEN KISIM
		 düseydeger = düseydeger - 1;
		 yataydeger = yataydeger - 1;
		 int sayac3 = yataydeger + a;
		 for (yataydeger; yataydeger < sayac3; yataydeger++) {
			 botmatris[yataydeger][düseydeger] = 3;
		 }



		 break;
	 }
	 }

	}
	return 0;
}

int oyuncuvurma(int atistabakasi[10][10], int botmatris[10][10], int oyuncumatris[10][10], int sira)
{

	int atiskordinat[2] = { };
	cout << "            _________________________________________         ";
	cout << " _________________________________________" << endl << endl;
	cout << "                      GUNCEL OYUN TABAKANIZ                     ";
	cout << "           GUNCEL ATIS TABAKANIZ " << endl;
	cout << "            _________________________________________         ";
	cout << " _________________________________________" << endl << endl;
	cout << "                       1 2 3 4 5 6 7 8 9 10                    ";
	cout << "            1 2 3 4 5 6 7 8 9 10" << endl;
	cout << "                      _____________________                    ";
	cout << "           _____________________" << endl;
	for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
		switch (sayac1) {
		case 9:
			cout << "                   " << sayac1 + 1 << "| ";
			break;
		default:
			cout << "                   " << sayac1 + 1 << " | ";
			break;
		}
		for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
			cout << oyuncumatris[sayac1][sayac2] << " ";

		}
		cout << "|";

		switch (sayac1) {
		case 9:
			cout << "              |             " << sayac1 + 1 << "| ";
			break;
		default:
			cout << "              |             " << sayac1 + 1 << " | ";
			break;
		}
		for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
			cout << atistabakasi[sayac1][sayac2] << " ";

		}
		cout << "|" << endl;

	}
	/*cout << "           ____________________________________________________________________________________________" << endl;

	cout << "                        ___________________________________________________________" << endl << endl;
	cout << "                                             GUNCEL BOT TABAKANIZ                     " << endl;
	cout << "                        ___________________________________________________________" << endl << endl;
	cout << "                                               1 2 3 4 5 6 7 8 9 10" << endl;
	cout << "                                              _____________________" << endl;
	for (int sayac1 = 0; sayac1 <= 9; sayac1++) {
		switch (sayac1) {
		case 9:
			cout << "                                           " << sayac1 + 1 << "| ";
			break;
		default:
			cout << "                                           " << sayac1 + 1 << " | ";
			break;
		}
		for (int sayac2 = 0; sayac2 <= 9; sayac2++) {
			cout << botmatris[sayac1][sayac2] << " ";

		}
		cout << "|" << endl;
	}



	cout << endl << endl << endl;
	*/

	cout << "                        ___________________________________________________________" << endl << endl;
	cout << "                                   ATIS YAPMAK ISTEDIGINIZ KORDINATLARI  GIRINIZ                " << endl;
	cout << "                        ___________________________________________________________" << endl << endl;
	cout << "                                         ATIS YAPMAK ISTEDIGINIZ SATIR:                " << endl;
	cin >> atiskordinat[0];
	system("CLS");
	while (atiskordinat[0] < 1 || atiskordinat[0]>10) {
		cout << "                                   LUTFEN 0 ÝLE 10 ARASINDA BIR DEGER GIRINIZ              " << endl;
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                         ATIS YAPMAK ISTEDIGINIZ SATIR:                " << endl;
		cin >> atiskordinat[0];
		system("CLS");
	}
	atiskordinat[0] = (atiskordinat[0] - 1);
	cout << "                        ___________________________________________________________" << endl << endl;
	cout << "                                         ATIS YAPMAK ISTEDIGINIZ SUTUN:                " << endl;
	cin >> atiskordinat[1];
	cout << "                        ___________________________________________________________" << endl << endl;
	system("CLS");
	while (atiskordinat[1] < 1 || atiskordinat[1]>10) {
		cout << "                                   LUTFEN 0 ÝLE 10 ARASINDA BIR DEGER GIRINIZ              " << endl;
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                         ATIS YAPMAK ISTEDIGINIZ SUTUN:                " << endl;
		cin >> atiskordinat[1];
		cout << "                        ___________________________________________________________" << endl << endl;
 	system("CLS");
	}
	atiskordinat[1] = atiskordinat[1] - 1;
	while (atistabakasi[atiskordinat[0]][atiskordinat[1]] != 0) {

		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                    GIRDINIZ KORDINATLARA DAHA ONCE ATIS YAPTINIZ TEKRAR KORDINAT GIRINIZ                " << endl;
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                         ATIS YAPMAK ISTEDIGINIZ SATIR:                " << endl;
		cin >> atiskordinat[0];
		cout << "                        ___________________________________________________________" << endl << endl;
		cout << "                                         ATIS YAPMAK ISTEDIGINIZ SUTUN:                " << endl;
		cin >> atiskordinat[1];
		cout << "                        ___________________________________________________________" << endl << endl;
		atiskordinat[1] = atiskordinat[1] - 1;
		atiskordinat[0] = (atiskordinat[0] - 1);

		system("CLS");
	}
	
	if (botmatris[atiskordinat[0]][atiskordinat[1]] == 0) {
	cout << "                          ___________________________________________________________" << endl << endl;
	cout << "                                                  KARAVANA                 " << endl;
	cout << "                          ___________________________________________________________" << endl << endl;
		atistabakasi[atiskordinat[0]][atiskordinat[1]] = 2;
		botmatris[atiskordinat[0]][atiskordinat[1]] = 2;
		sira = 0;
		}
	else {
	cout << "                          ___________________________________________________________" << endl << endl;
	cout << "                                                    VURDUNUZ               " << endl;
	cout << "                          ___________________________________________________________" << endl << endl;
		atistabakasi[atiskordinat[0]][atiskordinat[1]] = 1;
		botmatris[atiskordinat[0]][atiskordinat[1]] = 1;
		sira = 1;
	}
	return sira;
}

int bilgisayarvurma(int atistabakasipc[10][10], int oyuncumatris[10][10], int sira)
{
	

	
	srand(time(NULL));
	int atiskordinat[2] = {};
	int vurdumu = 0;
	atiskordinat[0] = rand()% 10 + 1;
	atiskordinat[1] = rand() % 10 + 1;
	while (atistabakasipc[atiskordinat[0]][atiskordinat[1]] != 0) {

		
			atiskordinat[0] = rand() % 10 + 1;
			atiskordinat[1] = rand() % 10 + 1;
		
		
	}

	
	if (oyuncumatris[atiskordinat[0]][atiskordinat[1]] == 0) {
		cout << "                          ___________________________________________________________" << endl << endl;
		cout << "                                               BILGISAYAR KARAVANA                 " << endl;
		cout << "                          ___________________________________________________________" << endl << endl;
		atistabakasipc[atiskordinat[0]][atiskordinat[1]] = 2;
		oyuncumatris[atiskordinat[0]][atiskordinat[1]] = 2;
		sira = 1;
	}
	else {
		cout << "                          ___________________________________________________________" << endl << endl;
		cout << "                                                BILGISAYAR  VURDU             " << endl;
		cout << "                          ___________________________________________________________" << endl << endl;
		atistabakasipc[atiskordinat[0]][atiskordinat[1]] = 1;
		oyuncumatris[atiskordinat[0]][atiskordinat[1]] = 1;
		vurdumu = 1;
		sira = 0;
	}

	return sira;
}

void sirakimde(int atistabakasi[10][10],int botmatris[10][10],int atistabakasipc[10][10],int oyuncumatris[10][10],int sira)
{
	int k = 1;
	int b = 1;
	int sirad = sira;
	while (sirad == 1 && b != 0 && k != 0) {

		sirad = oyuncuvurma(atistabakasi, botmatris, oyuncumatris, sira);

		b = 0;
		int kontrol1 = 0;
		int bitis1 = 9;
		for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
			int kontrol2 = 0;
			int bitis2 = 9;
			for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
				if (botmatris[kontrol1][kontrol2] == 3) {
					b++;
				}
			}
		}
		if (b == 0) {
			cout << " OYUNU KAZANDINIZ !!! ";
		}
		k = 0;
		kontrol1 = 0;
		bitis1 = 9;
		for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
			int kontrol2 = 0;
			int bitis2 = 9;
			for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
				if (oyuncumatris[kontrol1][kontrol2] == 3) {
					k++;
				}
			}
		}




		if (k == 0) {
			cout << "OYUNU KAYBETTINIZ !! ";
		}


		while (sirad == 0 && b!=0 && k!=0) {

			sirad = bilgisayarvurma(atistabakasipc, oyuncumatris, sira);

			b = 0;
			int kontrol1 = 0;
			int bitis1 = 9;
			for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
				int kontrol2 = 0;
				int bitis2 = 9;
				for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
					if (botmatris[kontrol1][kontrol2] == 3) {
						b++;
					}
				}
			}
			if (b == 0) {
				cout << " OYUNU KAZANDINIZ !!! ";
			}
			k = 0;
			kontrol1 = 0;
			bitis1 = 9;
			for (kontrol1; kontrol1 <= bitis1; kontrol1++) {
				int kontrol2 = 0;
				int bitis2 = 9;
				for (kontrol2; kontrol2 <= bitis2; kontrol2++) {
					if (oyuncumatris[kontrol1][kontrol2] == 3) {
						k++;
					}
				}
			}




			if (b == 0) {
				cout << "OYUNU KAYBETTINIZ !! ";
			}
		}
	}
}

void nasiloynanir(int oyuncumatris[10][10], int botmatris[10][10], int atistabakasi[10][10], int atistabakasipc[10][10], int sira)
{
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                                   OYUN KURALLARI"<< endl;
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "1 -) ILK OLARAK GEMILERINIZI GEMILERIN ARASINDA 1 ER BOSLUK OLACAK SEKILDE YERLESTIRMELISINIZ." << endl << endl ;
	cout << "2 -) RAKIBINIZIN TABAKASINDA BIR YER BELIRLEYEREK BU BOLGEYE ATES ETMELISINIZ.ATES ETTIGINIZ YERDE BIR GEMI VARSA ; \n\n ATIS TABAKASINDA ATISINIZ 1 OLARAK KARAVANA ATARSANIZ 2 OLARAK GOSTERILIR . " << endl<<endl;
	cout << "3 -) RAKIP TABAKADAKI TUM GEMI PARCALARINI ONCE VURAN OYUNU KAZANIR." << endl<<endl;
	cout << "4 -) VURULMUS GEMILER 1 KARAVANA ATILMIS ATISLAR 2 VE SAGLAM GEMILER 3 ILE GOSTERILIR." << endl<<endl;
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                                GERI DONMEK ICIN 1 GIRINIZ : ";
	int secim = 0;
	cin >> secim;
	system("CLS");
	while (secim != 1) {
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                   OYUN KURALLARI" << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "1 -) ILK OLARAK GEMILERINIZI GEMILERIN ARASINDA 1 ER BOSLUK OLACAK SEKILDE YERLESTIRMELISINIZ." << endl << endl;
		cout << "2 -) RAKIBINIZIN TABAKASINDA BIR YER BELIRLEYEREK BU BOLGEYE ATES ETMELISINIZ.ATES ETTIGINIZ YERDE BIR GEMI VARSA ; \n\n ATIS TABAKASINDA ATISINIZ 1 OLARAK KARAVANA ATARSANIZ 2 OLARAK GOSTERILIR . " << endl << endl;
		cout << "3 -) RAKIP TABAKADAKI TUM GEMI PARCALARINI ONCE VURAN OYUNU KAZANIR." << endl << endl;
		cout << "4 -) VURULMUS GEMILER 1 KARAVANA ATILMIS ATISLAR 2 VE SAGLAM GEMILER 3 ILE GOSTERILIR." << endl << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                   YANLIS DEGER GIRDINIZ" << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                GERI DONMEK ICIN 1 GIRINIZ : ";
		cin >> secim;
		system("CLS");
	}

	switch (secim)
		case 1: {
		system("CLS");
		menu(oyuncumatris, botmatris, atistabakasi, atistabakasipc, sira);
		break; }



}

void yapimcilar(int oyuncumatris[10][10], int botmatris[10][10], int atistabakasi[10][10], int atistabakasipc[10][10], int sira)
{
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                                     YAPANLAR           " << endl;
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                               1 -) 160101018  --  BERAT OK" << endl;
	cout << "                               2 -) 160101034  --  OGUZ ARAC " << endl;
	cout << "                               3 -) 160101028  --  SONER SIMSEK" << endl  ;
	cout << "                              _________________________________________________________" << endl << endl;
	cout << "                                               GERI DONMEK ICIN 1 GIRIN :  " << endl;
	int secim = 0;
	cin >> secim;
	system("CLS");
	while (secim != 1) {
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                     YAPANLAR           " << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                               1 -) 160101018  --  BERAT OK" << endl;
		cout << "                               2 -) 160101034  --  OGUZ ARAC " << endl;
		cout << "                               3 -) 160101000  --  SONER SIMSEK" << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                   YANLIS DEGER GIRDINIZ" << endl;
		cout << "                              _________________________________________________________" << endl << endl;
		cout << "                                                GERI DONMEK ICIN 1 GIRINIZ : ";
		cin >> secim;
		system("CLS");
	}

	switch (secim)
		case 1: {
		system("CLS");
		menu(oyuncumatris, botmatris, atistabakasi, atistabakasipc, sira); 
		break; }
}









