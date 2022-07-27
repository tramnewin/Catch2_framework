#define CATCH_CONFIG_MAIN
#include "../catch.hpp"

using namespace std;


bool isEven(int x)
{
    
    return x % 2 == 0 ? true : false;
}

SCENARIO( "return true if it is even, false if it is", "[even]" ) {

    GIVEN( "An even integer" ) {
        int x = 2;


        WHEN( "the number is added by 1" ) {
            x++;

            THEN( "the number is odd" ) {
                REQUIRE_FALSE( isEven(x) );
            }
        }
        WHEN( "the number is added by 2" ) {
            x+=2;

            THEN( "the number is even" ) {
                REQUIRE( isEven(x) );
                
            }
        }
        
    }
}