#include "Enemy.h"
#include "Novice.h"

void Enemy::Initialize() { 
	pos_ = {1000.0f, 100.0f};
}

void Enemy::Update() {

}

void Enemy::Draw() {
	if (!isDead_) {
		Novice::DrawBox(int(pos_.x), int(pos_.y), 50, 50, 0.0f, WHITE, kFillModeSolid);
	}
}

void Enemy::IsCollision() { isDead_ = true; }