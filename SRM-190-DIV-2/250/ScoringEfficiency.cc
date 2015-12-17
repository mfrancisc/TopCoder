
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

class ScoringEfficiency
{
  public:
    double getPointsPerShot(vector <string> gameLog)
    {
      int totalPoints = 0;
      int fieldGoals = 0;
      int freeThrows = 0;

      for(int x = 0; x < gameLog.size(); x++)
      {
        string buf; // Have a buffer string
        stringstream ss(gameLog[x]); // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
          tokens.push_back(buf); 

        if(tokens[1] == "free"){
          freeThrows++; 
          if(tokens[0] == "Made"){
            totalPoints++; 
          }
        }else{
          fieldGoals++;
          if(tokens[0] == "Made"){
            int points = atoi(tokens[1].c_str());
            totalPoints += points;
          }

        } 

      }

      double shot = (double)totalPoints/(fieldGoals + (0.5*freeThrows));

      return shot;
    }
};

