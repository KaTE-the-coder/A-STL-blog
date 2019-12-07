#include <iostream>
#include <map> //for std::map
#include <string>

void setMap()
{
    //Declaring std::map:
    std::map <std::string, int> M{{"Cobb", 36}, {"Arthur", 29}, {"Eames", 33}}; // Initializing M with initializer list
    M["Ariadne"] = 23;    // insert key = "Anna" with value = 23
    M["Robert"] = 33;  // insert key = "Robert" with value = 33
    for(const auto& m : M)
        std::cout<<m.first<<" "<<m.second<<'\n';

}
