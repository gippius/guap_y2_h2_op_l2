#pragma once

#include <string>

class Box {
public:
    Box();
    Box(double length, double width, double height);
    Box(const Box& other);
    ~Box();

    double getLength() const;
    double getWidth() const;
    double getHeight() const;
    double getVolume() const;

    std::string voi() const;

private:
    void updateVolume();

    double length_;
    double width_;
    double height_;
    double volume_;
};

