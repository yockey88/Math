#ifndef QUATERNION_HPP
#define QUATERNION_HPP

#include "../../src/include/Core.hpp"
#include "Vector.hpp"

#include<iostream>

namespace Y {

    namespace math {

        // structs //

        /////////////

        // classes //

        class Quaternion {
            Vec3 vecPart;
            double real , i , j , k;

            public:
                Quaternion();
                Quaternion(double real , double i , double j , double k);

                Quaternion operator+(Quaternion &other);
                Quaternion operator-(Quaternion &other);
                Quaternion operator*(Quaternion &other);
                void operator+=(Quaternion &other);
                void operator-=(Quaternion &other);
                void operator*=(Quaternion &other);
                friend std::ostream& operator<<(std::ostream &os , const Quaternion &q);

                inline void setReal(double real) { this->real = real; }
                inline void setI(double i) { this->i = i; }
                inline void setJ(double j) { this->j = j; }
                inline void setK(int k) { this->k = k; }

                inline Vec3 getVecPart() const { return vecPart; }
                inline double getReal() const { return real; }
                inline double getI() const { return i; }
                inline double getJ() const { return j; }
                inline double getK() const { return k; }
        };

        /////////////

        // functions //

        //////////////

    } // End of math

} // End of Y

#endif /* Quaternion.hpp */