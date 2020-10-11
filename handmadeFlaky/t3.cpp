// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <vector>    // std::next_permutation, std::sort

using namespace std;
int main () {
  vector<int> myints;

  for(int i = 0 ; i < 10 ;i ++)
        myints.push_back(i);
  // std::sort (myints,myints+3);

  std::cout << "The 3! possible permutations with 3 elements:\n";
  do {
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while ( std::next_permutation(myints.begin(),myints.begin()+10) );

  std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

  return 0;
}
