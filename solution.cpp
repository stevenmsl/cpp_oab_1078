#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol1078;
using namespace std;

vector<string> Solution::findOccurrences(string text, string first, string second)
{

  auto result = vector<string>();

  string f, s, t;
  auto ss = stringstream(text);

  while (ss >> t)
  {
    /* we have scanned in first and second in a row
       - t is the third
    */
    if (f == first && s == second)
      result.push_back(t);
    f = s, s = t;
  }

  return result;
}