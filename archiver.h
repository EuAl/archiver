#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string getInfo(vector<string> files, string path); // предварительный сбор информации об архивируемых файлах
void pack(vector<string> files, string path); // запаковка
void unpack(vector<string> archives, string path); // распаковка
