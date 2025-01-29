#include "Player.h"
#include "Novice.h"

Player::Player() {

}

void Player::Draw() { Novice::DrawBox(int(pos_.x), int(pos_.y), 20, 20, 0.0f, WHITE, kFillModeSolid); }

void Player::MoveRight() { pos_.x += speed_; }

void Player::MoveLeft() { pos_.x -= speed_; }