#include <iostream>
#include <conio.h>
#include <fstream>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>
#include <string>
#include <sys/stat.h>

#include "FileOp.h"
// bunch of includes





void printVector(std::vector<char>& vec) { // for debugging
    for (std::vector<char>::iterator vecIt = vec.begin(); vecIt < vec.end(); vecIt++) {
        std::cout << (*vecIt);
    }
    std::cout << std::endl;
}





int main() {
    std::string file = "test.txt";
    std::vector<char> buffer; // buffer to store file info
    readFile(file, buffer);
    printVector(buffer);


    return 0;
}
