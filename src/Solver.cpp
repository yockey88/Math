#include "Solver.hpp"

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

        std::tuple<double , double , double , double> parseEqnLine(std::string line) {
            std::cout << "[EQN] " << line << std::endl;
            int aI , bI , cI , dI;
            double a , b , c , d;
            bool found1 = false , found2 = false , found3 = false;
            std::string term1 , term2 , term3 , term4;
            for (int i = 0; i < line.length(); i++) {
                std::cout << "[i] = " << line[i] << std::endl;
                // if (line.substr(line[i],3) == "x^2") found1 = true;
                if (line[i] == 'x') found2 = true;
                if (line[i] == '=')  found3 = true;
            }
            if (!found1 && !found2 && !found3) {
                std::cout << "{!!!} | [EQN -> " << line << "] is invalid" << std::endl;
                exit(1);
            }
            // term1 = line.substr()
            return std::make_tuple(a , b , c , d);
        }

        std::tuple<double , double> solveQuadratic (double a , double b , double c , double d) {
            double neg , pos , rt;
            double x;
            if ((pow(b,2) - 4 * a * c)< 0) {
                std::cout << "Roots are complex" << std::endl;
                return std::make_tuple(0.0f,0.0f);
            } else if (a == 0 && b > 0) {
                d -= c;
                x = (d + 0.0f)/ (b + 0.0f);
                return std::make_tuple(x + 0.0f,0.0f);
            } else if (a > 0 && b == 0) {
                d -= c;
                x = sqrt(d / b);
                return std::make_tuple(x + 0.0f,0.0f);
            } else if (a == 0 && b == 0) {
                std::cout << "Coeffiecients of x are 0\n[No Solutions]" << std::endl;
                return std::make_tuple(0.0f,0.0f);
            }
            c -= d;
            rt = sqrt((pow(b,2) - 4 * a * c));
            neg = (-b - rt) / (2 * a);
            pos = (-b + rt) / (2 * a);
            return std::make_tuple(pos , neg);
        }

        /////////////////////////
        /// End of Functions ///
        ///////////////////////

    } // End of math

} // End of Y