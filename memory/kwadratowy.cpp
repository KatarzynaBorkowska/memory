//
//  kwadratowy.cpp
//  memory
//
//  Created by Kasia on 07/01/2021.
//

#include "kwadratowy.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void kwadratowy(int w)
{
    if(w % 2 != 0)
    {
        cout << "OK ale 'w' musi być liczba parzysta: ";
        cin >> w;
    }
    srand( time( NULL ) );
    
    
    int tab[w][w],liczb = (w * w)/2,p,q,pom = 0;
    
    for(int i = 0;i < w;i++)
        for(int j = 0;j < w;j++)
            tab[i][j] = 0;
    

    while(liczb != 0)
    {
        p = rand() % w;
        q = rand() % w;
        if(tab[p][q] == 0)
        {
            tab[p][q] = liczb;
            pom++;
            if(pom == 2)
            {
                liczb--;
                pom = 0;
            }
        }
    }
    for(int i = 0;i < w;i++)
    {
        for(int j = 0;j < w;j++){
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "OK to bierzemy się za ćwiczenia.\n";
    int tabp[w][w];
    for(int i = 0;i < w;i++)
        for(int j = 0;j < w;j++)
            tabp[i][j] = 0;
    pom = 0;
    int x1,x2,y1,y2,n = w*w/2;
    
    for(int i = 0;i < w;i++)
            {
                for(int j = 0;j < w;j++){
                    if(tabp[i][j] == 0)
                        cout << i+1 << "x" << j+1 << "\t";
                    else
                        cout << " " << tab[i][j] << "\t";
                }
                cout << endl;
            }
    while(n != 0)
    {
        
        cout << "Chce odslonić: x = ";
        cin >> x1;
        cout << " y = ";
        cin >> y1;
        cout << "oraz chce odslonić: x = ";
        cin >> x2;
        cout << " y = ";
        cin >> y2;
        if(tab[x1 - 1][y1 - 1] == tab[x2 - 1][y2 - 1])
        {
            tabp[x1 - 1][y1 - 1] = 1;
            tabp[x2 - 1][y2 - 1] = 1;
            n--;
            system("clear");
            cout << "Brawo!!!\n";
            for(int i = 0;i < w;i++)
                    {
                        for(int j = 0;j < w;j++){
                            if(tabp[i][j] == 0)
                                cout << i+1 << "x" << j+1 << "\t";
                            else
                                cout << " " << tab[i][j] << "\t";
                        }
                        cout << endl;
                    }
        }
        else
        {
            cout << "Niestety nie udało sie. Pod zaslonietymi kartami są takie liczby\n";
            for(int i = 0;i < w;i++)
                    {
                        for(int j = 0;j < w;j++){
                            if((i == x1 - 1 && j == y1 - 1) || (i == x2 - 1 && j == y2 - 1) || tabp[i][j] != 0)
                                cout << " " << tab[i][j] << "\t";
                            else
                                cout << i+1 << "x" << j+1 << "\t";
                        }
                        cout << endl;
                    }
            cout << endl;
        }
    }
}
