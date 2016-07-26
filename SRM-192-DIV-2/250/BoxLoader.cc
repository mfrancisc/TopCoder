
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

class BoxLoader
{
  public:
    int mostItems(int boxX, int boxY, int boxZ, int itemX, int itemY, int itemZ)
    {
      int totX = 0;
      int totY = 0;
      int totZ = 0;
      int totXa = 0;
      int totYa = 0;
      int totZa = 0;
      int totXb = 0;
      int totYb = 0;
      int totZb = 0;


      int totX1 = boxX / itemX;
      int restX1 = boxX % itemX;
      if(restX1 == 0)
      {
        totX = totX1; 
      }

      int totY1 = boxY / itemY;
      int restY1 = boxY % itemY;
      if(restY1 == 0)
      {
        totY = totY1; 
      }


      int totZ1 = boxZ / itemZ;
      int restZ1 = boxZ % itemZ;
      if(restZ1 == 0)
      {
        totZ = totZ1; 
      }


      int totX2 = boxX / itemY;
      int restX2 = boxX % itemY;
      if(restX2 == 0 )
      {
        totXa = totX2; 
      }



      int totY2 = boxY / itemZ;
      int restY2 = boxY % itemZ;
      if(restY2 == 0 )
      {
        totYa = totY2; 
      }


      int totZ2 = boxZ / itemX;
      int restZ2 = boxZ % itemX;
      if(restZ2 == 0 )
      {
        totZa = totZ2; 
      }


      int totX3 = boxX / itemZ;
      int restX3 = boxX % itemZ;
      if(restX3 == 0 )
      {
        totXb = totX3; 
      }



      int totY3 = boxY / itemX;
      int restY3 = boxY % itemX;
      if(restY3 == 0 )
      {
        totYb = totY3; 
      }


      int totZ3 = boxZ / itemY;
      int restZ3 = boxZ % itemY;
      if(restZ3 == 0 )
      {
        totZb = totZ3; 
      }


      int tot = totX * totY * totZ;
      int tot1 = totXa * totYa * totZa;
      int tot2 = totXb * totYb * totZb;

      int finalTot = 0;

      if(tot >= tot1)
      {
        finalTot = tot;
      } else {

        finalTot = tot1;
      }

      if(tot2 > finalTot)
      {
        finalTot = tot2;
      }

      return finalTot;

    }
};

