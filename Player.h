#pragma once
#include "Vector2.h"

class Player {
public:
	Player();

	void Draw();

	void MoveRight();
	void MoveLeft();

private:
	Vector2 pos_ = {50.0f, 50.0f};

	float speed_ = 1.0;
};
