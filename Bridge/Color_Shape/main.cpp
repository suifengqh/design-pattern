#include "shape.h"
#include "color.h"
#include <cstdlib>

int main(){
        Color* red = new Red();
        Color* green = new Green();

        Shape* r_rect = new Rect(red);
        Shape* g_circle = new Circle(green);
        Shape* g_rect = new Rect(green);
        Shape* r_circle = new Circle(red);

        r_rect->ShapeDescription();
        g_circle->ShapeDescription();
        g_rect->ShapeDescription();
        r_circle->ShapeDescription();

        delete red; red = NULL;
        delete green; green = NULL;

        delete r_rect; r_rect = NULL;
        delete g_circle; g_circle = NULL;
        delete g_rect; g_rect = NULL;
        delete r_circle; r_circle = NULL;

        return 0;
}