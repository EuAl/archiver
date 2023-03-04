#include "archiver.h"

int main()
{
    string operation = "";
    vector<string> files;
    string path = "";
    int numFiles;
    string file;

    cout << "pack/unpack: ";
    cin >> operation;

    cout << "numFiles: ";
    cin >> numFiles;
    for (int i = 0; i < numFiles; i++)
    {
        cout << "file" << i + 1 << ": ";
        cin >> file;
        files.push_back(file);
    }

    cout << "path: ";
    cin >> path;

    if (operation == "pack") pack(files, path);
    if (operation == "unpack") unpack(files, path);
}
