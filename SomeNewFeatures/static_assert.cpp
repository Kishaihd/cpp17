/*
 *  static_assert( condition, "optional message for error output while compiling");
 */
 
#include <iostream>

int main() {
    const int x = 5, y = 5;
    
    static_assert ( 1 == 0, "Assertion failed" );
    static_assert ( 1 == 0 );
    static_assert ( x == y );
    
    return 0;
}
