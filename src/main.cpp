#include "Solver.hpp"

int main(int argc,char* argv[]) {
    if (argc < 2) {
        std::cout << "{!!!} | [USAGE]: ./build/math <ax^2 + bx + c = d>" << std::endl;
        return 1;
    }
    std::string eqn;
    for (int i = 1; i < argc; i++) {
        eqn += argv[i];
    }
    auto [a , b , c , d] = Y::math::parseEqnLine(eqn);
    auto [ posRt , negRt ] = Y::math::solveQuadratic(a , b , c , d);
    std::cout << "[EQN] " << eqn << std::endl;
    std::cout << "Roots = {" << posRt << " , " << negRt << "}" << std::endl;
    return 0;
}


