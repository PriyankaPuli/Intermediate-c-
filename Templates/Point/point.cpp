#include"point.h"
#include <gtest/gtest.h>

int main(int argc, char **argv){
    Point<int> P(10,20);
    P.distanceFromOrigin();
    cout<<P.quadrant();
    P.display();
    Point<double> P1(10.23,-20.22);
    P1.distanceFromOrigin();
    cout<<P1.quadrant();
    P1.display();
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
   /*int argc, char **argv*/

}