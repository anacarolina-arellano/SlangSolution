#include <iostream>
#include <string>
#include <vector>
using namespace std;
//First Step: Function that returns the n-grams of the received text
vector<string> calculateNGrams​(string text​, int ​n​)
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
        solution.push_back(newAnagram);
      }
      //when the if is true, we have already considered the end of the array
    }
  }
  return solution;  
}


int main() {
  std::cout << "Hello World!\n";
}