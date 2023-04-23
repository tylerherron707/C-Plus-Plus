#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;
int clear()
{
    system("C:\\Code\\Repos\\c++\\clear.bat");
    return 0;
}
int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    clear();
}