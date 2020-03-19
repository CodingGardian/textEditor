#include <iostream>
#include <conio.h>
#include <fstream>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>
#include <sys/stat.h>

#include "FileOp.h"



inline void readFile(std::string name, std::vector<char>& vec) {
    std::fstream temp(name.c_str(), std::ios::app | std::ios::binary | std::ios::in);
    vec.clear();
        while(1) {
            char peek = temp.peek();
            char val;
            if (!(peek == EOF)) {
                temp >> std::noskipws >> val;
                vec.push_back(val);
                }
            else {break;}
        }

    temp.close();
}


inline void readAndEraseFile(std::string name, std::vector<char>& vec) {
    std::fstream temp(name.c_str(), std::ios::app | std::ios::binary | std::ios::in);
    while(1) {
            char peek = temp.peek();
            char val;
            if (!(peek == EOF)) {
                temp >> std::noskipws >> val;
                vec.push_back(val);
                }
            else {break;}
        }

    temp.close();

    std::fstream temp1(name.c_str(), std::ios::trunc);
    temp.close();
}

inline bool fileExist(std::string& name) {
    struct stat buf;
    return ( stat(name.c_str(), &buf) == 0);

}

inline bool fileExist(const char* name) {
    struct stat buf;
    return ( stat(name, &buf) == 0);
}



