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
