class Point {
    public:
        Point(float x, float y);
        float getX() const;
        float getY() const;
        void setX(float x);
        void setY(float y);
    
    private:
        float coordX;
        float coordY;
};

class Circle: public Point {
    public:
        Circle(float x, float y, float r);
        float getRadius() const;
        void setRadius(float r);

    private:
        float radius;
};

class Elipse: public Point {
    public:
        Elipse(float x, float y, float a, float b);
        float getA() const;
        float getB() const;
        void setA(float a);
        void setB(float b);

    private:
        float semiMajorAxis;
        float semiMinorAxis;
};

class Rectangle: public Point {
    public:
        Rectangle(float x, float y, float b, float h);
        float getBase() const;
        float getHeight() const;
        void setBase(float b);
        void setHeight(float h);
    
    private:
        float base;
        float height;
};