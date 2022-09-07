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
            int i1 , i2 , i3;
            double a , b , c , d;
            bool found1 = false , found2 = false , found3 = false;
            std::string term1 , term2 , term3 , term4;

            for (int i = 0; i < line.length(); i++) {
                if (line[i] == '^') { found1 = true; i1 = i; }
                if (line[i] == 'x') { found2 = true; i2 = i; }
                if (line[i] == '=') { found3 = true; i3 = i; }
            }

            if (!found1 && !found2 && !found3) {
                std::cout << "{!!!} | [EQN -> " << line << "] is invalid" << std::endl;
                std::cout << "[USAGE]: ./build/math <ax^2 + bx + c = d>" << std::endl;
                exit(1);
            }

            a = std::stod(line.substr(0 , i1 - 1));
            b = std::stod(line.substr(i1 + 3, i2 - i1 - 3));
            c = std::stod(line.substr(i2 + 2 , i3 - 1));
            d = std::stod(line.substr(i3 + 1 , line.length() - i3 - 1));
            
            return std::make_tuple(a , b , c , d);
        }

        std::tuple<double , double> solveQuadratic (double a , double b , double c , double d) {
            double neg , pos , rt;
            double x;

            if ((pow(b,2) - 4 * a * c)< 0) {
                std::cout << "Roots are complex" << std::endl;
                return std::make_tuple(0.0f , 0.0f);
            } else if (a == 0 && b > 0) {
                d -= c;
                x = (d + 0.0f)/ (b + 0.0f);
                return std::make_tuple(x + 0.0f , 0.0f);
            } else if (a > 0 && b == 0) {
                d -= c;
                x = sqrt(d / b);
                return std::make_tuple(x + 0.0f , 0.0f);
            } else if (a == 0 && b == 0) {
                std::cout << "Coeffiecients of x are 0\n[No Solutions]" << std::endl;
                return std::make_tuple(0.0f , 0.0f);
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