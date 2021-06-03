#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file = fstream("File.txt", ios::out);

    string data = "Hello This is my File Handling code in C++";
    file << data;

    file.close();
    return 0;
}
