#pragma once
#include "Vector2.h"

class Player {
public:
	void Initialize();
	void Update(char* keys, char* preKeys);
	void Draw();

	Vector2 GetBulletPos() { return bulletPos_; }

	bool IsShoot() const { return isShoot_; }

private:
	Vector2 pos_ = {0.0f, 0.0f};
	float speed_ = 3.0;

	float shotTimer_ = 0.0f;
	float shotTime_ = 0.0f; 

	bool isShoot_ = false;
	Vector2 bulletPos_ = {0.0f, 0.0f};
	float bulletSpeed_ = 9.0;
};
