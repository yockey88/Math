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

        std::tuple<double , double , double , double> parseEqnLine(std::string &line);

        std::tuple<double , double> solveQuadratic (double a , double b , double c , double d);

        /////////////////////////
        /// End of Functions ///
        ///////////////////////

    } // End of math

} // End of Y

#endif /* Solver.hpp */