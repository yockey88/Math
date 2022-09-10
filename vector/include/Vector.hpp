#ifndef VECTOR_HPP
#define VECTOR_HPP

namespace Y {

    namespace math {

        // structs //

        struct Vec2 {
            Vec2();
            Vec2(double x , double y);
            double x , y;
        };

        struct Vec3 {
            Vec3();
            Vec3(double x , double y , double z);
            double x , y , z;
        };

        ////////////

        // classes //
        ////////////

        // functions //

        //////////////

        namespace vops {

            double dotProduct2(Vec2 u , Vec2 v);

            double dotProduct3(Vec3 u , Vec3 v);

            // double crossProduct2(Vec2 u , Vec2 v);

            Vec3 crossProduct3(Vec3 u , Vec3 v);

        } // End of vops

    } // End of math

} // End of Y

#endif /* Vector.hpp */