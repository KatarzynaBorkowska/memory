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
    int n,w,p,i;
    vector<int> v1,v2;
    srand( time( NULL ) );
    cout << "Witaj w grze memory!!!\n";
    cout << "Jak dużo chcesz mieć pól? ";
    cin >> w;
    i = w;
    while(i != 0)
    {
        p = ( rand() % w ) + 1;
        cout << "p -> " << p << endl;
        if(czy_juz_byla(v1, p)){
            v1.push_back(p);
            i--;
            continue;
        }
        cout << "Liczba sie powturzyła " << p << endl;
    }
    i = w;
    while(i != 0)
    {
        p = ( rand() % w ) + 1;
        cout << "p -> " << p << endl;
        if(czy_juz_byla(v2, p)){
            v2.push_back(p);
            i--;
            continue;
        }
        cout << "Liczba sie powturzyła " << p << endl;
    }
    for(i = 0;i < w;i++)
        cout << v1[i] << " ";
    cout << endl;
    for(i = 0;i < w;i++)
        cout << v2[i] << " ";
    
    return 0;
}
