#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1078;

/*
Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
Output: ["girl","student"]
*/

tuple<string, string, string, vector<string>>
testFixture1()
{
  auto output = vector<string>{
      "girl", "student"};

  return make_tuple("alice is a good girl she is a good student",
                    "a", "good",
                    output);
}

/*
Input: text = "we will we will rock you", first = "we", second = "will"
Output: ["we","rock"].
*/

tuple<string, string, string, vector<string>>
testFixture2()
{
  auto output = vector<string>{
      "we", "rock"};

  return make_tuple("we will we will rock you",
                    "we", "will",
                    output);
}
void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << Util::toString(get<3>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.findOccurrences(get<0>(f), get<1>(f), get<2>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << Util::toString(get<3>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.findOccurrences(get<0>(f), get<1>(f), get<2>(f))) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}