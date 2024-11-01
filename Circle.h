#pragma once
#include "IShape.h"

class Circle : public IShape {
public:
    //�R���X�g���N�^
    Circle(double radius) : radius_(radius) {}

    //�ʐς��v�Z
    double Size() const override;

    //�ʐς�\��
    void Draw() const override;

private:
    double radius_;
};

