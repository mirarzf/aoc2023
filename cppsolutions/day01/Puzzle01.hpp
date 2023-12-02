#ifndef DEF_PUZZLE01
#define DEF_PUZZLE01

#include <string>

class Puzzle01 {
    private: 
    std::string input; 
    
    public: 
    // Constructors 
    Puzzle01(); 
    Puzzle01(std::string newinput); 

    // Getters 
    std::string getSolution(int puzzlepart); 
}; 

#endif 