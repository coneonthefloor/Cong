#include "main.h"


void Update() {}

void Draw() {
	BeginDrawing();
	ClearBackground(BLACK);

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

