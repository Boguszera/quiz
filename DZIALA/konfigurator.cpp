#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()

{
int liczba, wybor;

cout << "PODAJ LICZBE SLOW, KTORE CHCESZ WPROWADZIC: ";
cin >> liczba;

string ang[liczba], pol[liczba], nie[liczba], polnie[liczba];




                cout << "1. WPROWADZ ANGIELSKIE SLOWA" <<endl;
                cout << "2. WPROWADZ NIEMIECKIE SLOWA" <<endl;
                cout << "WYBIERZ: ";
                cin >> wybor;
                system("cls");


                switch (wybor)
                {
                case 1:
                            {


                            fstream angielskie;
                            angielskie.open("angielskie.txt",ios::out);
                            fstream polskie;
                            polskie.open("polskie.txt",ios::out);

                            for (int i = 0; i<liczba ; i++)
                            {
                                cout << "PODAJ SLOWO PO ANGIELSKU: " <<endl;
                                cin >> ang[i];
                                angielskie << ang[i] << endl;

                                cout << "PODAJ SLOWO PO POLSKU: " <<endl;
                                cin >> pol[i];
                                polskie << pol[i] << endl;
                            }
                            }


                break;

                case 2:
                    {


                            fstream niemieckie;
                            niemieckie.open("niemieckie.txt",ios::out);
                            fstream polskienie;
                            polskienie.open("polskienie.txt",ios::out);

                            for (int i = 0; i<liczba ; i++)
                            {
                                cout << "PODAJ SLOWO PO NIEMIECKU: " <<endl;
                                cin >> nie[i];
                                niemieckie << nie[i] << endl;

                                cout << "PODAJ SLOWO PO POLSKU: " <<endl;
                                cin >> polnie[i];
                                polskienie << polnie[i] << endl;
                            }
                    }
                }









return 0;
}
