#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("./testfolder/testcoords.txt");

    while (fout)
    {
        getline(cin, line);

        if (line == "-1") break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin;
    fin.open("./testfolder/testcoords.txt");

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    fin.open("./testfolder/testcoords.txt");
    int x, y;
    while (getline(fin, line))
    {
        istringstream coords(line);
        coords >> x >> y;
        cout << x << " " << y << endl;
    }
    fin.close();


    return 0;
}