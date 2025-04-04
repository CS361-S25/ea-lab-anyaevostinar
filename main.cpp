#include <iostream>
#include "Empirical/include/emp/math/Random.hpp"

//Organism class with instance variable double behavior
class Organism {
public:
    // Instance variable
    double behavior;

    // Constructor to initialize behavior
    Organism(double b) : behavior(b) { }

    // Function to get the behavior
    double GetBehavior() const {
        return behavior;
    }

    // Function to set the behavior
    void SetBehavior(double b) {
        behavior = b;
    }
};



int main() {

}