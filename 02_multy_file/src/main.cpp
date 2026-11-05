#include <iostream>
#include "vision/camera.hpp"
#include "vision/exposure.hpp"
int main() {
    std::cout << "Image width: " << vision::image_width() << '\n';
    return 0;
}