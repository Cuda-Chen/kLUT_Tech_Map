#include <iostream>
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

    mapper_foo();

    return 0;
}
