#include "Rectangle.h"
#include <cstdio>

//�ʐς��v�Z
double Rectangle::Size() const {
    return width_ * height_;
}

//�ʐς�\��
void Rectangle::Draw() const {
    printf("��`�̖ʐς�: %.2f\n", Size());
}
