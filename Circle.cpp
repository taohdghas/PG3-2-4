#include "Circle.h"
#include <cstdio>

//�ʐς��v�Z
double Circle::Size() const {
    return 3.14159 * radius_ * radius_;
}

//�ʐς�\��
void Circle::Draw() const {
    printf("�~�̖ʐς�: %.2f\n", Size());
}
