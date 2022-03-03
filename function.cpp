#pragma once
#include <iostream>
#include <fstream>
#include "function.h"

using namespace std;

vector<string> void readFile()
{
  ifstream file("README.md");

  vector<string> names;
  string temp;

  while(getline(file, line))
  {
    v.push_back(line);
  }

  return names;
}

void outputNames()
{
  vector<string> temp;

  for(int i = 0; i < temp.size(); i++)
  {
    if(temp[i] == "Group Members:\")
    {
      vector.erase(i);
      break;
    }
    vector.erase(i);
  }

  for(int i = 0; i < temp.size(); i++)
  {
    cout << temp[i] << endl;
  }
}
