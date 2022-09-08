#ifndef SOLVER_HPP
#define SOLVER_HPP

#include "../../include/Core.hpp"

#include<tuple>

namespace Y {

    namespace math {

        /// Structs ///

        ///////////////////////
        /// End of Structs ///
        /////////////////////



        /// Classes ///

        ///////////////////////
        /// End of Classes ///
        /////////////////////



        /// Functions ///

        std::tuple<float , float , float , float , char , char> parseEqnLine(std::string &line);

        std::tuple<float , float> solveQuadratic (float a , float b , float c , float d , char op1 , char op2);

        /////////////////////////
        /// End of Functions ///
        ///////////////////////

    } // End of math

} // End of Y

#endif /* Solver.hpp */