#include <vector>
#include <map>

int score(const std::vector<int>& dice) {
  std::map<int, int> results; // our container <element, number of repeatings>
  // since map cannot store repeated values, we store amount of repeatings
  for (int e : dice) // looping ONE time though first array(string...)
  {
    if (results.count(e) > 0) // if element is already there,
    {
      results.at(e) += 1; // increment amount of repeatings
//      continue; // it is optional, because insert() checks if it is already there before inserting
    }
    // insert element and 1(since it is first)
    results.insert(std::pair<int, int> (e, 1));
  }
  
  int score {}; // equivalent to: 'int score = 0;'
  for (std::pair<int, int> e : results)
  {
    if (results.count(array) > 0 && all.at(string_2[i]) > 0)
    {
      counter++;
      all.at(string_2[i]) -= 1;
    }
  }
  return score;
}

#include<string>
#include <map>

bool scramble(std::string& s1, std::string& s2){
  std::map<char, int> all; // our container <element, number of repeatings>
// since map cannot store repeated values, we store amount of repeatings
  for (int i = 0; i < string_1.size(); i++) // looping ONE time though first array(string...)
  {
    if (all.count(string_1[i]) != 0) // if element is already there,
    {
      all.at(string_1[i]) += 1; // increment amount of repeatings
//      continue; // it is optional, because insert() checks if it is already there before inserting
    }
    // insert element and 1(since it is first)
    all.insert(std::pair<char, int> (string_1[i], 1));
  }
// looping through our second array
  for (int i = 0; i < string_2.size(); i++)
  {
// checking if container has it already && if it's repeating is not used(if array might have duplicates)
    if (all.count(string_2[i]) != 0 && all.at(string_2[i]) > 0)
    {
      all.at(string_2[i]) -= 1; // here I reduce amoun of repeatings because we have found and used one
    }
    else
    {
      // do smth
      return false;
    }
  }
  return false;
}

