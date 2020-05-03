#ifndef SHAPE_H
#define SHAPE_H

class Color;

class Shape{
public:
        Shape(Color* color_) : m_color(color_) {}
        virtual void ShapeDescription() = 0;
protected:
        Color* m_color;
};

class Rect : public Shape{
public:
        Rect(Color* color_) : Shape(color_) {}
        void ShapeDescription();
};

class Circle : public Shape{
public:
        Circle(Color* color_) : Shape(color_) {}
        void ShapeDescription();
};

#endif