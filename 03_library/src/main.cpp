#include <iostream>
#include "vision/camera.hpp"

int main() {
    std::cout << "Image width: " << vision::image_width() << '\n';
    return 0;
}