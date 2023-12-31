#include <raylib.h>
#include "pad.h"

typedef struct
{
	int Size;
	Vector2 Position;
	Vector2 Velocity;
} Ball;

void UpdateBall(Ball* ball);
void DrawBall(Ball* ball);
bool DetectBallTouchesPad(Ball* ball, Pad* pad);