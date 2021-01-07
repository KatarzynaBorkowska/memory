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
#include "kwadratowy.hpp"

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
    if(rodzaj == 1)
        kwadratowy(w);
    return 0;
}
