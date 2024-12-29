#include <stdio.h>
#include <stdlib.h>

// add arguments to argv by type file_name.exe value like areaRactangle.exe 34.2 65.5
int main(int argc, char *argv[]) {
    double width = atoi(argv[1]); // function atoi() use for convert value to double
    double height = atoi(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("Width is: %.2f, Hight is: %.2f,Perimeter is: %.2f\n", width, height, perimeter);
    printf("Area is: %f", area);

    return 0;
}