#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

#include <string>

class Color{
public:
        virtual std::string GetColor() = 0;
};

class Red : public Color{
public:
        std::string GetColor();
};

class Green : public Color{
public:
        std::string GetColor();
};

#endif