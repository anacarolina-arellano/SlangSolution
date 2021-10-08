#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
//STEP ONE: Function that returns the n-grams of the received text
//unordered_map was added during step two
vector<string> calculateNGrams​(string text​, int ​n​, unordered_map<string, int> &frequencies)
{
  vector<string> solution;
  //EDGE CASE: SEND AND EMPTY STRING AND N > 0
  if(n > text.lenght()) return solution;
  //Outside loop is O(n), we have to traverse the text
  for(int i = 0; i < text​.length(); i++)
  {
    //inner loop constant complexity O(1) (example: always be 2, always 3, etc. worst case escenario it will be of the lenght of the text, in that case this algorithm would turn into O(n^2))
    string newAnagram = "";
    for(int j = 0; j < n; j++)
    {
      //Check if we are not going out of limits
      if(i < text.lenght() - 1)
      {
        //construct the anagram by adding the characters
        newAnagram += text[i + j];

      }
      //when the if is true, we have already considered the end of the array
    }
    //add anagram to our solution
    solution.push_back(newAnagram);
    //check if anagram exists in our map
    if(frequencies.find(newAnagram) == frequencies.end())
    {
      //if it doesn't exist add it
      frequencies[newAnagram] = 1;
    }
    else
    {
      //add 1 to the frequency
      frequencies[newAnagram] ++;
    }
  }
  return solution;  
}

//COMPLEXITY OF UNORDERED MAP IS CONSTANT, IS NOT GREATER THAT THE ONE OF THE ALGORITH
string mostFrequentNGram​(​string text​,int n​)
{
  //STEP TWO: Have a hash map and store the frequency of the anagrams
  unordered_map<string, int> anagramFrequencies;
  vector<string> myAnagrams = calculateNGrams​(text, n, anagramFrequencies);

  int max = 0;
  string mostFreqAnam = "";
  for(const anam : map ) 
  {
    if(anam.second > max)
    {
      mostFreqAnam = anam.first;
    }
  }
  return mostFreqAnam;
}

int main() {
  
}