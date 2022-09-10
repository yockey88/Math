#include "include/Vector.hpp"
using namespace Y::math;

Vec2::Vec2() {
    x = 0;
    y = 0;
}

Vec2::Vec2(double x , double y) {
    this->x = x;
    this->y = y;
}

Vec3::Vec3() {
    x = 0;
    y = 0;
    z = 0;
}

Vec3::Vec3(double x , double y , double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

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
