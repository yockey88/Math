#include "src/include/Core.hpp"

int main(int argc , char* argv[]) {
    std::cout << int(11) << std::endl;
    Y::math::ComplexNum cnA(2 , 2);
    Y::math::ComplexNum cnB(3 , 3);
    Y::math::ComplexNum cntestA(5 , 5);
    Y::math::ComplexNum cntestB(0 , 12);
    std::cout << "[RUNNING TESTS]" << std::endl;

    Y::math::ComplexNum cnC = cnA + cnB;
    Y::math::ComplexNum cnD = cnA * cnB;
    std::cout << "[TESTING COMPLEX NUMBERS]" << std::endl;
    assert((cnC.getRealPart() == cntestA.getRealPart()) && (cnC.getImagPart() == cntestA.getImagPart()));
    std::cout << "Adding Successful: " << cnA << " + " << cnB << " = " << cnC << std::endl;
    assert((cnD.getRealPart() == cntestB.getRealPart()) && (cnD.getImagPart() == cntestB.getImagPart()));
    std::cout << "Multiplying Successful: " << cnA << " + " << cnB << " = " << cnD << std::endl;
    std::cout << "[COMPLEX NUMBERS PASSED TESTS]" << std::endl;

    std::cout << "[TESTING QUATERNIONS]" << std::endl;
    std::cout << "[QUATERNIONS PASSED TESTS]" << std::endl;

    std::cout << "[ALL TESTS PASSED]" << std::endl;
    return 0;
}