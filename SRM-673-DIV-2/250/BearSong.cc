
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

class BearSong
{
  public:
    int countRareNotes(vector <int> notes)
    {
      int countNotes = notes.size();
      for(int a = 0; a < notes.size(); a++) {
        for(int b = 0; b < notes.size(); b++) {
          if( notes[a] == notes[b] && a != b) {
            countNotes = countNotes - 1;
          }
        } 
      }

      if(countNotes < 0) {
        countNotes = 0; 
      }
      return countNotes; 
    }
};

