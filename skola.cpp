#include<iostream>

using namespace std;

int main()
{
    int pocetTymov;
    int bodyTymov[pocetTymov];
    int viacAko;
    double priemerBodov;
    double sucet;
    int max;
    int pozicia;
    cout << "pocet tymov " ;
    cin >> pocetTymov;
    for (int i=0; i < pocetTymov ; ++i){
        cout << "zadaj pocet bodov " << i << " tymu " ;
        cin >> bodyTymov[i];
        if (bodyTymov[i] > 10){
            viacAko++;
            sucet=sucet+bodyTymov[i];
        }
        if (max<bodyTymov[i]){
            max=bodyTymov[i];
            pozicia=i;
        }
    }
int menu;
while(menu!=0){
    cout << "1/vypis tymov 2/priemerny pocet bodov 3/najlepsi tym 0/koniec " << endl;
    cin >> menu;
    if(menu==1){
        for (int i=0; i < pocetTymov ; ++i){
            cout<< i << " tym: " << bodyTymov[i] << endl;
        }
    }
    if(menu==2){
        cout << "priemerny pocet bodov je "<< sucet/pocetTymov << endl;
    }
    if(menu==3){
        cout << pozicia << " vyhral " << endl;
    }
}
return 0 ;
}