#include "include/Solver.hpp"

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

        std::tuple<float , float , float , float , char , char> parseEqnLine(std::string &line) {
            int s1_index = -1, s2_index = -1, x1 = -1, x2 = -1 , e_index = -1;
            char op1 = '!', op2 = '!';
            float a , b , c , d;
            for (int i = 0; i < line.length(); i++) {
                if (line[i] == 'x' && line[i + 1] == '^') {
                    x1 = i;
                    (i == 0) ? (a = 1.0f) : (a = std::stof(line.substr(0 , i)));
                }
                if (line[i] == 'x' && line[i + 1] != '^') {
                    x2 = i;
                    (line[i - 1] == '+' || line[i - 1] == '-') ? (b = 1.0f) : (b = std::stof(line.substr(x1 + 4 , i - (x1 + 3))));
                }
                if ((line[i] == '+' || line[i] == '-') && line[i - 2] == '^') {
                    s1_index = i;
                    op1 = line[i];
                }
                if ((line[i] == '+' || line[i] == '-') && line[i - 2] != '^') {
                    s2_index = i;
                    op2 = line[i];
                }
                if (line[i] == '=') e_index = i;
            }
            c = std::stof(line.substr(s2_index + 1 , e_index - s2_index));
            d = std::stof(line.substr(e_index + 1 , line.length() - e_index + 1));
            return std::make_tuple(a , b , c , d , op1 , op2);
        }

        std::tuple<float , float> solveQuadratic (float a , float b , float c , float d , char op1 , char op2) {
            std::cout << "a = " << a << std::endl; std::cout << "b = " << b << std::endl; 
            std::cout << "c = " << c << std::endl; std::cout << "d = " << d << std::endl;
            double neg , pos , rt , x;
            if (op1 == '-') b *= -1;
            if (op2 == '-') c *= -1;
            if ((pow(b,2) - (4 * a * c)) < 0) {
                std::cout << "Roots are complex" << std::endl;
                return std::make_tuple(-1.0f , -1.0f);
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
                return std::make_tuple(-1.0f , -1.0f);
            }

            c -= d;
            rt = sqrt((pow(b,2) - 4 * a * c));
            neg = -(b + rt) / (2 * a);
            pos = (rt - b) / (2 * a);

            return std::make_tuple(pos , neg);
        }

        /////////////////////////
        /// End of Functions ///
        ///////////////////////

    } // End of math

} // End of Y