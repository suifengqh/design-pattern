#include "color.h"
#include "shape.h"
#include <iostream>

void Rect::ShapeDescription(){
        std::cout << m_color->GetColor() << " Rect" << std::endl;
}

void Circle::ShapeDescription(){
        std::cout << m_color->GetColor() << " Circle" << std::endl;
}