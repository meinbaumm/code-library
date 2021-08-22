#include <iostream>
#include <cmath>

class Volume
        {
        public:
            constexpr static double pi = 3.14159265358979323846;  /* pi */

            static double cube_volume(double side_length)
            {
                /*
                Calculate the Volume of a Cube.

                >>> cube_volume(1)
                1.0
                >>> cube_volume(3)
                27.0
                 */
                return pow(side_length, 3);
            }


            static double cuboid_volume(double width, double height, double length)
            {
                /*
                Calculate the Volume of a Cuboid.
                :return multiple of width, length and height

                >>> cuboid_volume(1, 1, 1)
                1.0
                >>> cuboid_volume(1, 2, 3)
                6.0
                */
                return width * height * length;
            }


            static double cone_volume(double area_of_base, double height)
            {
                /*
                Calculate the Volume of a Cone.

                Wikipedia reference: https://en.wikipedia.org/wiki/Cone
                :return (1/3) * area_of_base * height

                >>> cone_volume(10, 3)
                10.0
                >>> cone_volume(1, 1)
                0.3333333333333333
                */
                return (area_of_base * height) / 3.0;
            }


            static double right_circ_cone_volume(double radius, double height)
            {
                /*
                Calculate the Volume of a Right Circular Cone.

                Wikipedia reference: https://en.wikipedia.org/wiki/Cone
                :return (1/3) * pi * radius^2 * height

                >>> right_circ_cone_volume(2, 3)
                12.566370614359172
                */
                return pi * pow(radius, 2) * height / 3.0;
            }


            static double prism_volume(double area_of_base, double height)
            {
                /*
                Calculate the Volume of a Prism.
                Wikipedia reference: https://en.wikipedia.org/wiki/Prism_(geometry)
                :return V = Bh
                >>> prism_volume(10, 2)
                20.0
                >>> prism_volume(11, 1)
                11.0
                */
                return area_of_base * height;
            }


            static double pyramid_volume(double area_of_base, double height)
            {
                /*
                Calculate the Volume of a Pyramid.
                Wikipedia reference: https://en.wikipedia.org/wiki/Pyramid_(geometry)
                :return  (1/3) * Bh

                >>> pyramid_volume(10, 3)
                10.0
                >>> pyramid_volume(1.5, 3)
                1.5
                */
                return area_of_base * height / 3.0;
            }


            static double sphere_volume(double radius)
            {
                /*
                Calculate the Volume of a Sphere.
                Wikipedia reference: https://en.wikipedia.org/wiki/Sphere
                :return (4/3) * pi * r^3

                >>> sphere_volume(5)
                523.5987755982989
                >>> sphere_volume(1)
                4.1887902047863905
                */
                return 4.0 / 3.0 * pi * pow(radius, 3);
            }


            static double circular_cylinder_volume(double radius, double height)
            {
                /*
                Calculate the Volume of a Circular Cylinder.
                Wikipedia reference: https://en.wikipedia.org/wiki/Cylinder
                :return pi * radius^2 * height

                >>> circular_cylinder_volume(1, 1)
                3.141592653589793
                >>> circular_cylinder_volume(4, 3)
                150.79644737231007
                */
                return pi * pow(radius, 2) * height;
            }
        };


int main()
{
    // Print the Results of Various Volume Calculations.
    std::cout << "Volumes: " << std::endl;
    std::cout << "Cube volume: " << Volume::cube_volume(3.0) << std::endl;
    std::cout << "Cuboid volume: " << Volume::cuboid_volume(1.0, 2.0, 3.0) << std::endl;
    std::cout << "Cone volume: " << Volume::cone_volume(10.0, 3.0) << std::endl;
    std::cout << "Right Circular Cone volume: " << Volume::right_circ_cone_volume(2.0, 3.0) << std::endl;
    std::cout << "Prism volume: " << Volume::prism_volume(10.0, 3.0) << std::endl;
    std::cout << "Pyramid volume: " << Volume::pyramid_volume(10.0, 3.0) << std::endl;
    std::cout << "Sphere volume: " << Volume::sphere_volume(2.0) << std::endl;
    std::cout << "Circular Cylinder volume: " << Volume::circular_cylinder_volume(2.0, 3.0) << std::endl;
}



