#include <iostream>
#include "wraptermios.h"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cout << "usage: " << argv[0] << " <ttyname>" << endl; 
        return 1;
    }

    int fd = Tty_open_easy(argv[1]);
    cout << "Open tty: " << argv[1] << " ok, " << "fd: " << fd << endl;

    return 0;
}


