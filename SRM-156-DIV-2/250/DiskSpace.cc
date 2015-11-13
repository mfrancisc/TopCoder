
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
#include <string>
#include <iostream>

using namespace std;

class DiskSpace
{
  public:
    int minDrives(vector <int> used, vector <int> total)
    {
      int freeSpaces[] = {};
      int hardDrivesNr = total.size();
      // total hard drive space
      for(int totalNr = 0; totalNr < hardDrivesNr; totalNr++) {

        // saving free space 
        freeSpaces[totalNr] = total[totalNr] - used[totalNr];
      }

      int countFreeSpaces = 0;
      // reading all free spaces
      for(int freeNr = 0; freeNr < hardDrivesNr; freeNr++) {

        for(int usedNr = 0; usedNr < hardDrivesNr; usedNr++) {
          if(freeNr != usedNr){
            while(used[usedNr] > 0 && freeSpaces[freeNr] > 0) {
              freeSpaces[freeNr] = freeSpaces[freeNr] - 1;
              used[usedNr] = used[usedNr] - 1;
            }

            //count as full disk
            if(freeSpaces[freeNr] == 0) {
              countFreeSpaces++;
            }
          }
        }
      }

      return countFreeSpaces;
    }
};

