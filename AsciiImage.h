#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class AsciiImage
{
public:
    AsciiImage();
    
    bool LoadImage(ifstream &file);
    void PrintImage(bool showTitle, bool showName, bool showID, bool showCateg, bool showURL);
    
private:
    // Your private variables go here.
    
    void PrintHorizontalBorder();
    void PrintWithVerticalBorders(string s);
};
