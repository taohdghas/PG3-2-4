#pragma once
class IShape {
public:
    //�ʐς��v�Z
    virtual double Size() const = 0;

    //�ʐς�\��
    virtual void Draw() const = 0;

    //�f�X�g���N�^
    virtual ~IShape() = default;
};