
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

class CrossWord
{
  public:
    int countWords(vector <string> board, int size)
    {
      int founded = 0;
      for(int a = 0; a < board.size(); a ++) {

        int count = 0;
        for(int y= 0; y< board[a].size(); y++) {


          if(board[a][y] == '.') {
            count++;

          } 

          else  if(count == size) {
            founded++; 
            count = 0;
          }else {
            count = 0;
          }
        }
        if(count == size) {
          founded++; 
        }

      } 
      return founded;
    }
};

