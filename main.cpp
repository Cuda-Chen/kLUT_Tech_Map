#include <iostream>
#include "mapper.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "We have " << argc << " arguments" << endl;

    for(int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    mapper_foo();

    return 0;
}
