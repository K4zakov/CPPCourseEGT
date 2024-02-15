#pragma once
class Box {
private:
    double width;
    double length;
    double height;

public:
    
    Box(double width, double length, double height);

    
    void setWidth(double width);
    void setLength(double length);
    void setHeight(double height);
    double getWidth() const;
    double getLength() const;
    double getHeight() const;

    
    friend Box operator+(const Box& box1, const Box& box2);
};

