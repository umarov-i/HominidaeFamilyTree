#include <iostream>
#include "Hominidae.h"
#include "Homininae.h"
#include "Hominini.h"
#include "Gorillini.h"
#include "Homo.h"
#include "Pan.h"
#include "Gorilla.h"
#include "Ponginae.h"
#include "Pongo.h"
using namespace std;


int main() {
    if constexpr(is_base_of<Ponginae, Homo>()) {
        cout << "Human is a Ponginae" << endl; //❌
    } else {
        cout << "Human is not a Ponginae" << endl; //✅
    }

    // Is Human a Homininae?
    if constexpr(is_base_of<Homininae, Homo>()) {
        cout << "Human is a Homininae" << endl; //✅
    } else {
        cout << "Human is not a Homininae" << endl; //❌
    }

    // Is Gorilla a Hominidae?
    if constexpr(is_base_of<Hominidae, Gorilla>()) {
        cout << "Gorilla is a Hominidae" << endl; //✅
    } else {
        cout << "Gorilla is not a Hominidae" << endl; //❌
    }

    // Is Gorilla a Hominini?
    if constexpr(is_base_of<Hominini, Gorilla>()) {
        cout << "Gorilla is a Hominini" << endl; //❌
    } else {
        cout << "Gorilla is not a Hominini" << endl; //✅
    }
    if constexpr(is_base_of<Hominidae, Pongo>()) {
        cout << "Pongo is a Hominidae" << endl; //✅
    } else {
        cout << "Pongo is not a Hominidae" << endl; //❌
    }

    // Is Pongo a Gorillini?
    if constexpr(is_base_of<Gorillini, Pongo>()) {
        cout << "Pongo is a Gorillini" << endl; //❌
    } else {
        cout << "Pongo is not a Gorillini" << endl; //✅
    }

    // Is Hominidae a Human?
    if constexpr(is_base_of<Homo, Hominidae>()) {
        cout << "Hominidae is a Human" << endl; //❌
    } else {
        cout << "Hominidae is not a Human" << endl; //✅
    }

    // Is Hominidae a Gorilla?
    if constexpr(is_base_of<Gorilla, Hominidae>()) {
        cout << "Hominidae is a Gorilla" << endl; //❌
    } else {
        cout << "Hominidae is not a Gorilla" << endl; //✅
    }
    return 0;
}