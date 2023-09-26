#define PONTO_H

typedef struct {
    float X;
    float Y;
} Ponto;

float Area(Ponto *vertices, int numVertices);
