#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
    //�R���X�g���N�^
    Rectangle(double width, double height) : width_(width), height_(height) {}

    //�ʐς��v�Z
    double Size() const override;

    //�ʐς�\��
    void Draw() const override;

private:
    double width_; 
    double height_;
};

