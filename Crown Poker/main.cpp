#include <raylib.h>

int main() {

	const int width = 1280;
	const int height = 720;

	SetTargetFPS(60);

	InitWindow(720, 1280, "Crown Poker");

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(WHITE);

		EndDrawing();


	}
	return 0;
}