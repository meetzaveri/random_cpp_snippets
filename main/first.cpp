#include <iostream>
 #include <stdlib.h>
// add's x can only be seen/used within function add() 
int add(int x, int y) // add's x and y are created here and can only be seen/used within add() after this point
{
    return x + y;
} // add's x and y are destroyed here
 
// main's x and y can only be seen/used within function main() 
int main()
{
    int x = 5; // main's x is created here, and can be seen/used only within main() after this point
    int y = 6; // main's y is created here, and can be seen/used only within main() after this point
 
    std::cout << add(x, y) << std::endl; // the value from main's x and y are copied into add's x and y
 
    // We can still use main's x and y here
 system("cls");
    return 0;
} // main's x and y are destroyed here