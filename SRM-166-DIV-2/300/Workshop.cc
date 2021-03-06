
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

class Workshop
{
  public:
    int pictureFrames(vector <int> pieces)
    {

      int first = 0;
      int second = 0;
      int third = 0;
      int countPieces = 0;
      int firstRes = 0;
      int secondRes = 0;
      int thirdRes = 0;

      for(int x = 0; x < pieces.size(); x++) {
        first = pieces[x];
        for(int y = 0; y < pieces.size(); y++) {
          second = pieces[y];
          if(first != second && x < y) {
            for(int z = 0; z < pieces.size(); z++) {
              third = pieces[z];

              if(first != third && second != third && y < z) {

                firstRes = first + second;
                secondRes = first + third;
                thirdRes = second + third;

                if((third < firstRes) && (second < secondRes) && (first < thirdRes)) {

                      countPieces++;
                }
              }
            }
          }

        } 
      }

      return countPieces;
    }
};

