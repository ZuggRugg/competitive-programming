/*
ID: zuggrug1
LANG: C++                 
PROG: ride
*/
/* LANG can be C++11 or C++14 for those more recent releases */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//After Problem: I was not getting the correct solution becuase I was converting the wrong thing to integer (should have just been char itself)
//You can convert a char to number quickly like c-'0' or c - 'A' + 1 or (int(c)-64)

int main() {
  ifstream fin ("ride.in");
  ofstream fout ("ride.out");
  string comet; string group;
  int csum = 1; int gsum = 1;

  fin >> comet >> group;
  
  for(int i=0; i<comet.length(); i++) {
    csum *= (int(comet[i])-64);
  }

  for(int i=0; i<group.length(); i++) {
    gsum *= (int(group[i])-64);
  }
  
  int grem = (gsum % 47);
  int crem = (csum % 47);

  if(grem == crem) { fout << "GO\n"; }
  else { fout << "STAY\n"; }

    return 0;
}
