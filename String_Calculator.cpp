//
//  String_Calculator.cpp
//  String_Kata
//
//  Created by Joseph Byam on 2/13/19.
//  Copyright © 2019 Joseph Byam. All rights reserved.
//

#include "String_Calculator.hpp"
#include <string>
#include "catch.hpp"

int stringCalculator( std::string s ) {
    int sum = 0;
    string delim = ",";
    
    if(s.empty()){
        return 0;
    }
    else
    {
        if (s.length() == 1 )
            return stoi(s);
        
        sum = stoi(s.substr(0,1))+stoi(s.substr(2,1));
        return sum;
    }
}

TEST_CASE( "Testing the stringCalculator" ) {
    
    SECTION("Testing empty string") {
        REQUIRE(stringCalculator("") == 0);
    }
    SECTION("Single Number"){
        REQUIRE(stringCalculator("1") == 1);
        REQUIRE(stringCalculator("12") == 12);
    }
    SECTION("Summing comma deliminated"){
        REQUIRE(stringCalculator("1,1") == 2);
    }
}
