//
//  main.cpp
//  memory
//
//  Created by Kasia on 04/01/2021.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Twektory.hpp"

using namespace std;

int main() {
    int n,w,p,d,i;
    vector<int> v1,v2;
    srand( time( NULL ) );
    cout << "Witaj w grze memory!!!\n";
    cout << "Jak dużo chcesz mieć pól? ";
    cin >> w;
    i = w;
    while(i != 0)
    {
        p = ( rand() % w ) + 1;
        if(czy_juz_byla(v1, p)){
            v1.push_back(p);
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
            i--;
            continue;
        }
    }
    for(i = 0;i < w;i++)
        cout << v1[i] << " ";
    cout << endl;
    for(i = 0;i < w;i++)
        cout << v2[i] << " ";
    n = w;
    while(n != 0)
    {
        cout << endl << "Podaj dwa pola ktore chcesz odsłonić: (w przedziale od 0 do " << w << ") " << endl;
        
        cout << "v1 -> ";
        for(i = 0;i < w;i++){
            cout << i + 1 << ". ";
            if(v1[i] == 0)
                cout << v1[i] << " ";
            else
                cout << "  ";
        }
        cout << endl << "v2 -> ";
        for(i = 0;i < w;i++){
            cout << i + 1 << ". ";
            if(v2[i] == 0)
                cout << v2[i] << " ";
            else
                cout << "  ";
        }
        cout << endl;
        cin >> p;
        cin >> d;
        p--;
        d--;
        if(v1[p] == v2[d])
        {
            v1[p] = 0;
            v2[d] = 0;
            n--;
        }
        else
            cout << "Niestety nie trafiles\n";
        system("clear");
    }
    cout << "Brawo znalazles wszystkie pary!!!!!\n";
    
    return 0;
}
