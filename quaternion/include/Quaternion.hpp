#ifndef QUATERNION_HPP
#define QUATERNION_HPP

#include "../../include/Core.hpp"
#include "../../vector/include/Vector.hpp"

#include<iostream>

namespace Y {

    namespace math {

        // structs //

        /////////////

        // classes //

        class Quaternion {
            Vec3 vecPart;
            int real , i , j , k;

            public:
                Quaternion();
                Quaternion(int real , int i , int j , int k);

                Quaternion operator+(Quaternion &other);
                Quaternion operator-(Quaternion &other);
                Quaternion operator*(Quaternion &other);
                void operator+=(Quaternion &other);
                void operator-=(Quaternion &other);
                void operator*=(Quaternion &other);
                friend std::ostream& operator<<(std::ostream &os , const Quaternion &q);

                inline void setReal(int real) { this->real = real; }
                inline void setI(int i) { this->i = i; }
                inline void setJ(int j) { this->j = j; }
                inline void setK(int k) { this->k = k; }

                inline int getReal() const { return real; }
                inline int getI() const { return i; }
                inline int getJ() const { return j; }
                inline int getK() const { return k; }
        };

        /////////////

        // functions //

        //////////////

    } // End of math

} // End of Y

#endif /* Quaternion.hpp */