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
#include "dwa_na_w.hpp"

using namespace std;

int main() {
    int w,rodzaj;
    cout << "Witaj w grze memory!!!\n";
    cout << "Jak dużo chcesz mieć pól? ";
    cin >> w;
    cout << "Jezeli wolisz " << w << "x" << w << " kliknij 1\n";
    cout << "A jezeli wolisz 2x" << w << " kliknij 2\n";
    cin >> rodzaj;
    if(rodzaj == 2)
        dwa_na_w(w);
    else{
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
    }
    return 0;
}
