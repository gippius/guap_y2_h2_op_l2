#include "box.hpp"

#include <iomanip>
#include <iostream>
#include <sstream>

Box::Box() : length_(1.0), width_(1.0), height_(1.0), volume_(0.0) {
    updateVolume();
    std::cout << "Default constructor called.\n";
}

Box::Box(double length, double width, double height)
    : length_(length), width_(width), height_(height), volume_(0.0) {
    updateVolume();
    std::cout << "Parameterized constructor called.\n";
}

Box::Box(const Box& other)
    : length_(other.length_), width_(other.width_), height_(other.height_), volume_(other.volume_) {
    std::cout << "Copy constructor called.\n";
}

Box::~Box() {
    std::cout << "Destructor called for box with volume " << volume_ << ".\n";
}

double Box::getLength() const {
    return length_;
}

double Box::getWidth() const {
    return width_;
}

double Box::getHeight() const {
    return height_;
}

double Box::getVolume() const {
    return volume_;
}

std::string Box::voi() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2)
           << "Box(" << length_ << ", " << width_ << ", " << height_
           << ") -> volume = " << volume_;
    return output.str();
}

void Box::updateVolume() {
    volume_ = length_ * width_ * height_;
}

