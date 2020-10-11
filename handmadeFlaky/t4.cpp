#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <utility>
#include <functional>
#include <unordered_map>
/*
 * Template function that returns 2nd Value from a pair
 */
template <typename K, typename V>
V getSecond(std::pair<K, V> const & pair)
{
    return pair.second;
}
int main() {
    // Map of string & int
    // To store the frequency count of words
    std::unordered_map<std::string, int> wordMap = { { "is", 6 }, { "the", 5 },
            { "hat", 9 }, { "at", 6 }, { "of", 2 }, { "hello", 1 } };
            
    /*
     * Copy all Values from a Map to a Vector using different techniques
     */
    // Vector of int to store values
     std::vector<int> vecOfValues;
     vecOfValues.reserve(wordMap.size());
     /*** Copy all value fields from map to a vector using Range Based For Loop ***/
     for(auto elem : wordMap)
         vecOfValues.push_back(elem.second);
     // Print contents of vector
    std::copy(vecOfValues.begin(), vecOfValues.end(), std::ostream_iterator<int>(std::cout, " , ") );
    std::cout<<std::endl;
    
    

    // Clear the vector
    vecOfValues.clear();
    /*** Copy all value fields from map to a vector using Lambda function ***/
    std::for_each(wordMap.begin(), wordMap.end(),  [&](std::pair<const std::string, int>  & element){
                                                        vecOfValues.push_back(element.second);
                                                    });
    // Print contents of vector
    std::copy(vecOfValues.begin(), vecOfValues.end(), std::ostream_iterator<int>(std::cout, " , ") );
    std::cout<<std::endl;
    // Vector of int to store values
    std::vector<int> vecOfValues2;
    vecOfValues2.reserve(wordMap.size());
    /*** Copy all value fields from map to a vector using transform() & Lambda function ***/
    std::transform (wordMap.begin(), wordMap.end(),back_inserter(vecOfValues2), [] (std::pair<std::string, int> const & pair)
                                                                                    {
                                                                                        return pair.second;
                                                                                    });
    // Print contents of vector
    std::copy(vecOfValues2.begin(), vecOfValues2.end(), std::ostream_iterator<int>(std::cout, " , ") );
    std::cout<<std::endl;
    // Vector of int to store values
    std::vector<int> vecOfValues3;
    vecOfValues3.reserve(wordMap.size());
    /*** Copy all values from a map to vector using transform() & function pointer ***/
    std::transform (wordMap.begin(), wordMap.end(),back_inserter(vecOfValues3), &getSecond<std::string, int>);
    // Print contents of vector
    std::copy(vecOfValues3.begin(), vecOfValues3.end(), std::ostream_iterator<int>(std::cout, " , ") );
    std::cout<<std::endl;
     return 0;
}
