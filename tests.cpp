#include "include/Core.hpp"

int main(int argc , char* argv[]) {
    Y::math::ComplexNum cnA(2 , 2);
    Y::math::ComplexNum cnB(3 , 3);
    Y::math::ComplexNum cntestA(5 , 5);
    Y::math::ComplexNum cntestB(0 , 12);
    Y::math::Quaternion qA(2 , 2 , 2 , 2);
    Y::math::Quaternion qB(3 , 3 , 3 , 3);
    Y::math::Quaternion qtestA(5 , 5 , 5 , 5);
    Y::math::Quaternion qtestB(-12 , 12 , 12 , 12);
    std::cout << "[RUNNING TESTS]" << std::endl;

    Y::math::ComplexNum cnC = cnA + cnB;
    Y::math::ComplexNum cnD = cnA * cnB;
    std::cout << "[TESTING COMPLEX NUMBERS]" << std::endl;
    assert((cnC.getRealPart() == cntestA.getRealPart()) && (cnC.getImagPart() == cntestA.getImagPart()));
    std::cout << "Adding Successful: " << cnA << " + " << cnB << " = " << cnC << std::endl;
    assert((cnD.getRealPart() == cntestB.getRealPart()) && (cnD.getImagPart() == cntestB.getImagPart()));
    std::cout << "Multiplying Successful: " << cnA << " + " << cnB << " = " << cnD << std::endl;
    std::cout << "[COMPLEX NUMBERS PASSED TESTS]" << std::endl;

    Y::math::Quaternion qC = qA + qB;
    Y::math::Quaternion qD = qA * qB;
    Y::math::Quaternion qE = qB * qA;
    std::cout << "[TESTING QUATERNIONS]" << std::endl;
    assert((qC.getReal() == qtestA.getReal()) && (qC.getI() == qtestA.getI()) && (qC.getJ() == qtestA.getJ()) && (qC.getK() == qtestA.getK()));
    std::cout << "Adding Successful: " << qA << " + " << qB << " = " << qC << std::endl;
    assert((qD.getReal() == qtestB.getReal()) && (qD.getI() == qtestB.getI()) && (qD.getJ() == qtestB.getJ()) && (qD.getK() == qtestB.getK()));
    std::cout << "Multiplying Successful: " << qA << " + " << qB << " = " << qD << std::endl;
    std::cout << "[QUATERNIONS PASSED TESTS]" << std::endl;

    std::cout << "[ALL TESTS PASSED]" << std::endl;
    return 0;
}