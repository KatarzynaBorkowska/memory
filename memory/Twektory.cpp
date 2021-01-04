//
//  Twektory.cpp
//  memory
//
//  Created by Kasia on 04/01/2021.
//

#include "Twektory.hpp"

#include <iostream>
#include <vector>
using namespace std;
bool czy_juz_byla(vector<int> v, int n)
{
    for(int i = 0;i < v.size();i++)
        if(v[i] == n)
            return false;
    return true;
}
bool czy_w_przedziale(int n,int w)
{
    return (n > 0) && (n <= w);
}
void wypisz(vector<int> v,vector<int> p)
{
    int i;
    for(i = 0;i < v.size();i++){
        cout << i + 1 << ".";
        if(p[i] == 0)
            cout << v[i] << "\t";
        else
            cout << "\t";
    }
}
