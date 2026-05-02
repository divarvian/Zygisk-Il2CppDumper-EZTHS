//
// Created by Perfare on 2020/7/4.
//

#ifndef ZYGISK_IL2CPPDUMPER_GAME_H
#define ZYGISK_IL2CPPDUMPER_GAME_H

#include <cstring>

// Array of supported game package names
static const char* GamePackageNames[] = {
    "com.mobile.legends:UnityKillsMe",
    "com.mobile.legends.usa:UnityKillsMe",
    "com.mobile.legends.lite:UnityKillsMe",
    "com.hhgame.mlbbvn:UnityKillsMe",
    "com.mobiin.gp:UnityKillsMe"
};

static const int GamePackageNamesCount = sizeof(GamePackageNames) / sizeof(GamePackageNames[0]);

// Function to check if package name is supported
static bool isGamePackage(const char* package_name) {
    if (package_name == nullptr) return false;
    
    for (int i = 0; i < GamePackageNamesCount; i++) {
        if (strcmp(package_name, GamePackageNames[i]) == 0) {
            return true;
        }
    }
    return false;
}

#endif // ZYGISK_IL2CPPDUMPER_GAME_H
