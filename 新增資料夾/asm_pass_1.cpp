#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
using namespace std;

const int NameMaxLen=31;

int main()
{
    char infname[NameMaxLen]="sample.txt";
    fstream file;
    file.open(infname, ios::in);
    if(!file)
    {
        cout << infname << " does not exist!" << endl;
        return 0;
    }

    string line;
    while(getline(file, line))
    {
        istringstream iss(line);

        string str;
        while(iss >> str)
        {

        }
    }
    return 0;
}
