#include <iostream>
#include <string>
#include "mapper.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
	 cout << 
	     "usage: ./kLUT <input_file_name> <K> <output_file_name>" << endl;
	 return 1;
    }

    string input = argv[1];
    string output = argv[3];

    //mapper_foo();
    mapperCheater(input, output);

    return 0;
}
