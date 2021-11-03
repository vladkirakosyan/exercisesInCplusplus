#ifndef VERTEX_H
#define VERTEX_H

class Vertex
{
public:
    Vertex()
    {       
        x = rand() % 201 - 100;
        y = rand() % 201 - 100;
    }
public:
    void print()
    {
        std::cout << "Vertex(" << x << ", " << y << ")" << std::endl;
    }
private:
    int x;
    int y;
};
#endif