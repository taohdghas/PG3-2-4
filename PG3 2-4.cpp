#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

int main()
{
    //インスタンスを作成
    //半径5
    Circle circle(5.0);       
    //幅4高さ6
    Rectangle rectangle(4.0, 6.0); 

    circle.Draw();
    rectangle.Draw();

    return 0;
}
