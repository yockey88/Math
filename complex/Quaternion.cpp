#include "include/Quaternion.hpp"
using namespace Y::math;

namespace Y {

    namespace math {

        namespace vops {
            double dotProduct2(Vec2 u , Vec2 v) {
                return ((u.x * v.x) + (u.y * v.y));
            }

            double dotProduct3(Vec3 u , Vec3 v) {
                return ((u.x * v.x ) + (u.y * v.y) + (u.z * v.z));
            }

            Vec3 crossProduct3(Vec3 u , Vec3 v) {
                Vec3 orth;
                double i , j , k;
                i = (u.y * v.z) - (u.z * v.y);
                j = (u.x * v.z) - (u.z * v.x) * (-1);
                k = (u.x * v.y) - (u.y * v.x);
                orth.x = i;
                orth.y = j;
                orth.z = k;
                return orth;
            }
        } // End of vops

        // structs //

        /////////////

        // classes //

        Quaternion Quaternion::operator+(const Quaternion &other) {
            Quaternion quat;
            Vec3 newV(imag.x + other.getI() , imag.y + other.getJ() , imag.z + other.getK());
            double newReal = real + other.getReal();
            quat.setImag(newV);
            quat.setReal(newReal);
            return quat;
        }

        Quaternion Quaternion::operator-(const Quaternion &other) {
            Quaternion quat;
            Vec3 newV(imag.x - other.getI() , imag.y - other.getJ() , imag.z - other.getK());
            double newReal = real - other.getReal();
            quat.setImag(newV);
            quat.setReal(newReal);
            return quat;
        }

        Quaternion Quaternion::operator*(const Quaternion &other) {
            Quaternion quat;
            // real * other.getVec() + other.getReal * imag
            Vec3 newV;
            double newReal = (real * real) + vops::dotProduct3(imag , other.getVec());
            return quat;
        }

        std::ostream& operator<<(std::ostream &os , const Quaternion &q) {
            return os;
        }

        /////////////

        // functions //

        //////////////

    } // End of math

} // End of Y