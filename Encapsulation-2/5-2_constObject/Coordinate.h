class Coordinate
{
public:
    Coordinate(int x, int y);
    ~Coordinate();
    void setX(int x);
    int getX() const;
    void setY(int y);
    int getY() const;

public:
    int m_iX;
    int m_iY;
};