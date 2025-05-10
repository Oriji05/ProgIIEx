//
//  library.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 07/05/25.
//

#include "library.hpp"

string getBasePath() {
    const char* env = nullptr;
#ifdef _WIN32
    env = getenv("USERPROFILE");
#else
    env = getenv("HOME");
#endif

    if (!env) {
        throw runtime_error("Variabile d'ambiente HOME/USERPROFILE non trovata.");
    }

    return string(env);
}

