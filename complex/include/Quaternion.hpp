#ifndef QUATERNION_HPP
#define QUATERNION_HPP

#include "../../src/include/Core.hpp"

#include<iostream>

namespace Y {

    namespace math {

        // structs //

        struct Vec2 {
            Vec2() : x(0) , y(0) {};
            Vec2(double x , double y) : x(x) , y(y) {};
            double x , y;

            Vec2 operator+(Vec2 &other);
        };

        struct Vec3 {
            Vec3() : x(0) , y(0) , z(0) {};
            Vec3(double x , double y , double z) : x(x) , y(y) , z(z) {};
            double x , y , z;

            Vec3 operator+(Vec3 &other);
        };

        /////////////

        // classes //

        class Quaternion {
            Vec3 imag;
            double real;
            public:
                Quaternion() : real(0) , imag(0 , 0 , 0) {};
                Quaternion(double real , Vec3 imag) : real(real) , imag(imag.x , imag.y , imag.z) {};
                Quaternion operator+(const Quaternion &other);
                Quaternion operator-(const Quaternion &other);
                Quaternion operator*(const Quaternion &other);
                inline void setImag(Vec3 imag) { this->imag = imag; }
                inline void setReal(double real) { this->real = real; }
                inline Vec3 getVec() const { return imag; }
                inline double getReal() const { return real; }
                inline double getI() const { return imag.x; }
                inline double getJ() const { return imag.y; }
                inline double getK() const { return imag.z; }
                friend std::ostream& operator<<(std::ostream &os , Quaternion &q);
        };

        /////////////

        // functions //

        //////////////

        namespace vops {

            double dotProduct2(Vec2 u , Vec2 v);

            double dotProduct3(Vec3 u , Vec3 v);

            Vec3 crossProduct3(Vec3 u , Vec3 v);

        } // End of vops

    } // End of math

} // End of Y

#endif /* Quaternion.hpp */