//
//  dwa_na_w.cpp
//  memory
//
//  Created by Kasia on 04/01/2021.
//

#include "dwa_na_w.hpp"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Twektory.hpp"

using namespace std;

void dwa_na_w(int w){
    int n,p,d,i;
    vector<int> v1,v2,p1,p2;
    srand( time( NULL ) );
    i = w;
    while(i != 0)
    {
        p = ( rand() % w ) + 1;
        if(czy_juz_byla(v1, p)){
            v1.push_back(p);
            p1.push_back(1);
            i--;
            continue;
        }
    }
    i = w;
    while(i != 0)
    {
        p = ( rand() % w ) + 1;
        if(czy_juz_byla(v2, p)){
            v2.push_back(p);
            p2.push_back(1);
            i--;
            continue;
        }
    }
    n = w;
    cout << endl << "Podaj dwa pola ktore chcesz odsłonić: (w przedziale od 0 do " << w << ") " << endl;
    
    while(n != 0)
    {
        cout << "v1 -> ";
        wypisz(v1, p1);
        cout << endl << "v2 -> ";
        wypisz(v2, p2);
        cout << endl;

        cin >> p;
        while(!czy_w_przedziale(p, w))
        {
            cout << "Liczba spoza przedzialu. Podaj inna: ";
            cin >> p;
            continue;
        }
        cin >> d;
        while(!czy_w_przedziale(d, w))
        {
            cout << "Liczba spoza przedzialu. Podaj inna: ";
            cin >> d;
            continue;
        }
        
        p--;
        d--;
        if(v1[p] == v2[d])
        {
            p1[p] = 0;
            p2[d] = 0;
            n--;
            system("clear");
        }
        else{
            p1[p] = 0;
            p2[d] = 0;
            cout << "v1 -> ";
            wypisz(v1, p1);
            cout << endl << "v2 -> ";
            wypisz(v2, p2);
            cout << endl;
            p1[p] = 1;
            p2[d] = 1;
            cout << "Niestety nie trafiles\n";
            
        }
    }
    cout << "v1 -> ";
    wypisz(v1, p1);
    cout << endl << "v2 -> ";
    wypisz(v2, p2);
    cout << endl;
    cout << "Brawo znalazles wszystkie pary!!!!!\n";
}
