#include "Player.h"
#include "Novice.h"

void Player::Initialize() { 
	pos_ = {100.0f, 50.0f};
	bulletPos_ = {0.0f, 0.0f};
	shotTimer_ = 0.0f;
}

void Player::Update(char* keys, char* preKeys) {
	if (keys[DIK_W]) {
		pos_.y -= speed_;
	} else if (keys[DIK_S]) {
		pos_.y += speed_;
	}
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && !isShoot_) {
		isShoot_ = true;
		bulletPos_ = pos_;
	}
	if (isShoot_) {
		bulletPos_.x += bulletSpeed_;
	}
	if (bulletPos_.x >= 1280) {
		isShoot_ = false;
	}
}

void Player::Draw() { 
	Novice::DrawBox(int(pos_.x), int(pos_.y), 50, 50, 0.0f, WHITE, kFillModeSolid);
	if (isShoot_) {
		Novice::DrawBox(int(bulletPos_.x), int(bulletPos_.y), 10, 10, 0.0f, BLUE, kFillModeSolid);
	}
}