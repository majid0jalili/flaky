#include <unistd.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <vector>    // std::next_permutation, std::sort
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 


using namespace std;
int main () {
    cout<<"Program started"<<endl;
    double f = 0;
    for(int i = 0 ; i < 2000000000;i++){
        f++;    
    }       
    cout<<"Loop done..going to sleep"<<endl;
    std::this_thread::sleep_for (std::chrono::seconds(5));
    cout<<"Sleep done "<<f<<endl;
    return 0;
}    
