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
	//char windowTitle = "Cong";
	InitWindow(screenWidth, screenHeight, "Cong");
	SetTargetFPS(60);

	Loop();

	return 0;
}

