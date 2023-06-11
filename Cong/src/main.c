#include "main.h"

void drawCenterLine() {
	int lineThickness = 2;
	float xCenter = GetScreenWidth() / 2;
	Vector2 start = { .x = xCenter, .y = 0 };
	Vector2 end = { .x = xCenter, .y = GetScreenHeight() };
	DrawLineEx(start, end, lineThickness, LIGHTGRAY);
}

void drawScore(int p1, int p2) {
	int textPad = 10;
	int fontSize = 20;

	const char* scoreLeft = TextFormat("%d", p1);
	int scoreLeftSize = MeasureText(scoreLeft, fontSize);
	DrawText(scoreLeft, (GetScreenWidth() / 2) - textPad - scoreLeftSize, textPad, fontSize, LIGHTGRAY);

	const char* scoreRight = TextFormat("%d", p2);
	DrawText(scoreRight, (GetScreenWidth() / 2) + textPad, textPad, fontSize, LIGHTGRAY);
}

void Update() {}

void Draw() {
	BeginDrawing();
	ClearBackground(BLACK);

	drawCenterLine();
	drawScore(2, 5);

	EndDrawing();
}

void Loop() {
	while (!WindowShouldClose()) {
		Update();
		Draw();
	}
}


int main() {
	int screenWidth = 640;
	int screenHeight = 480;
	int targetFrameRate = 60;
	char windowTitle[] = "Cong";

	InitWindow(screenWidth, screenHeight, windowTitle);
	SetTargetFPS(targetFrameRate);

	Loop();

	return 0;
}

