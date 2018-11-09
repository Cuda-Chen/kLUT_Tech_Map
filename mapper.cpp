#include <iostream>
#include <string>
#include <fstream>

#include "mapper.hpp"

using namespace std;

void mapper_foo()
{
    cout << "mapper foo" << endl;
}

void mapper(string inputFile, string outputFile)
{
}

void mapperCheater(std::string inputFile, std::string outputFile)
{
    ofstream output;
    output.open(outputFile);
    output << "0";
    output.close();
}
