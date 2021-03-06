
// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

// }}}

class TandemRepeats
{
  public:
    int maxLength(string dna, int k)
    {
      string base = "";
      int result = 0;
      for(int z = 0; z < dna.size(); z++) {
        int  x = z;
        int y = x + 1;
        for(; x < dna.size(); x++) {
          for(; y < dna.size(); y++) {
          int present = 0;
            if(dna[x] == dna[y]) {

              for(int a = 0; a < base.size(); a++) {
                if(dna[x] == base[a]) {
                  present = 1; 
                  break;
                } 
              } 

              if(present == 0) {
                base = base + dna[x]; 
                y = y + 1;
                break;
              }

            } else if(k > 0){
              for(int a = 0; a < base.size(); a++) {
                if(dna[x] == base[a]) {
                  present = 1; 
                  break;
                } 
              } 

              if(present == 0) {
                base = base + dna[x]; 
                y = y + 1;
                break;
              }
                k--; 
            }else if(k == 0){
              if(result < base.size()){
                result = base.size(); 
              }
              base = "";
              y = x + 1;
              break; 
            }


          }
        }
      }

      return result;
    }
};

