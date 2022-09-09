#include "include/Core.hpp"

int main(int argc , char* argv[]) {
    Y::math::ComplexNum numA(2 , 2);
    Y::math::ComplexNum numB(3 , 3);
    Y::math::ComplexNum testA(5 , 5);
    Y::math::ComplexNum testB(0 , 12);

    std::cout << "[RUNNING TESTS]" << std::endl;

    Y::math::ComplexNum numC = numA + numB;
    Y::math::ComplexNum numD = numA * numB;
    std::cout << "[TESTING COMPLEX NUMBERS]" << std::endl;
    assert((numC.getRealPart() == testA.getRealPart()) && (numC.getImagPart() == testA.getImagPart()));
    assert((numD.getRealPart() == testB.getRealPart()) && (numD.getImagPart() == testB.getImagPart()));
    std::cout << "[COMPLEX NUMBERS PASSED TESTS]" << std::endl;

    std::cout << "[ALL TESTS PASSED]" << std::endl;
    return 0;
}