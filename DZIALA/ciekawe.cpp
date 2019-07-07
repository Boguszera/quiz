#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
int main ()
{
string liniapl[30];
string liniaang[30];
string linianie[63];
string liniapolnie [63];
string odpowiedz;

int wybor, losowe, wynik, blad;

            fstream polskie;
            polskie.open("polskie.txt", ios::in);
            getline(polskie, liniapl[0]);
            for (int i=0;i<=30;i++)
            {
            getline(polskie, liniapl[i]);
            }
            polskie.close();

            fstream angielskie;
            angielskie.open ("angielskie.txt", ios::in);
            for (int i=0;i<=30;i++)
            {
            getline (angielskie, liniaang[i]);
            }
            angielskie.close();

            fstream niemieckie;
            niemieckie.open ("niemieckie.txt", ios::in);
            for (int i=0;i<=63;i++)
            {
            getline (niemieckie, linianie[i]);
            }
            niemieckie.close();

            fstream polskienie;
            polskienie.open ("polskienie.txt", ios::in);
            for (int i=0;i<=63;i++)
            {
            getline (polskienie, liniapolnie[i]);
            }
            polskienie.close();

                srand(time(NULL));





    cout << "WYBIERZ OPCJE:" << endl;
    cout << "0. ZASADY" << endl;
    cout << "1. Z POLSKIEGO NA ANGIELSKI" << endl;
    cout << "2. Z ANGIELSKIEGO NA POLSKI" << endl;
    cout << "3. Z POLSKIEGO NA NIEMIECKI" << endl;
    cout << "4. Z NIEMIECKIEGO NA POLSKI" << endl;

    cin >> wybor;

    switch (wybor)
    {
       case 0:
              cout << "OTRZYMASZ LOSOWE WYRAZY. TWOJ CEL TO UDZIELENIE 15 POPRAWNYCH ODPOWIEDZI. POWODZENIA!";
       break;

        case 1:
                system("cls");
                while (wynik>15)
                {
                losowe = rand()%29+1;
                cout << "PRZETLUMACZ TEN WYRAZ: " << liniapl[losowe] << endl;
                cin >> odpowiedz;
                    if (odpowiedz==liniaang[losowe])
                    {
                        cout << "BRAWO, ZGADLES!" << endl;
                        wynik++;
                        Sleep(2000);
                        system("cls");
                    }

                    else
                    {
                        cout << "ZLE... POPRAWNA ODPOWIEDZ TO: " << liniaang[losowe] << "\a" << endl;
                        blad++;
                        Sleep(2000);
                        system("cls");
                    }
                }
        break;

        case 2:
                system("cls");
                while (wynik>15)
                {
                losowe = rand()%29+1;
                cout << "PRZETLUMACZ TEN WYRAZ: " << liniaang[losowe] << endl;
                cin >> odpowiedz;
                    if (odpowiedz==liniapl[losowe])
                    {
                        cout << "BRAWO, ZGADLES!" << endl;
                        wynik++;
                        Sleep(2000);
                        system("cls");
                    }

                    else
                    {
                        cout << "ZLE... POPRAWNA ODPOWIEDZ TO: " << liniapl[losowe] << "\a" << endl;
                        blad++;
                        Sleep(2000);
                        system("cls");
                    }
                }
        break;

        case 3:
                system("cls");
                while (wynik>30)
                {
                losowe = rand()%63;
                cout << "PRZETLUMACZ TEN WYRAZ: " << liniapolnie[losowe] << endl;
                cin >> odpowiedz;
                    if (odpowiedz==linianie[losowe])
                    {
                        cout << "BRAWO, ZGADLES!" << endl;
                        wynik++;
                        Sleep(2000);
                        system("cls");
                    }

                    else
                    {
                        cout << "ZLE... POPRAWNA ODPOWIEDZ TO: " << linianie[losowe] << "\a" << endl;
                        blad++;
                        Sleep(2000);
                        system("cls");
                    }
                }
        break;

        case 4:
                system("cls");
                while (wynik>30)
                {
                losowe = rand()%63;
                cout << "PRZETLUMACZ TEN WYRAZ: " << linianie[losowe] << endl;
                cin >> odpowiedz;
                    if (odpowiedz==liniapolnie[losowe])
                    {
                        cout << "BRAWO, ZGADLES!" << endl;
                        wynik++;
                        Sleep(2000);
                        system("cls");
                    }

                    else
                    {
                        cout << "ZLE... POPRAWNA ODPOWIEDZ TO: " << liniapolnie[losowe] << "\a" << endl;
                        blad++;
                        Sleep(2000);
                        system("cls");
                    }
                }

        break;


                    system ("cls");
                    cout << "TO JUZ KONIEC..." << endl;
                    cout << "POPELNILES " << blad << "BLEDOW";




    }


}
