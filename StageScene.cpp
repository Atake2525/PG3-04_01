#include "StageScene.h"

void StageScene::Initialize() { 
	player_ = new Player();
	player_->Initialize();
	enemy_ = new Enemy();
	enemy_->Initialize();
}

void StageScene::Update(char* keys, char* preKeys) {

	player_->Update(keys, preKeys);
	enemy_->Update();


	if (player_->IsShoot()) {
		CheckCollision();
	}
	//// スペースキーを押した瞬間
	//if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
	//	// シーンをCLEARに変える
	//	sceneNo = CLEAR;
	//}
	if (enemy_->IsDead()) {
		sceneNo = CLEAR;
	}
}

void StageScene::Draw() {
	player_->Draw();
	enemy_->Draw();
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}

void StageScene::CheckCollision() {
	if (player_->GetBulletPos().x >= enemy_->GetPositoin().x && player_->GetBulletPos().x + 10 <= enemy_->GetPositoin().x + 50) {
		if (player_->GetBulletPos().y >= enemy_->GetPositoin().y && player_->GetBulletPos().y + 10 <= enemy_->GetPositoin().y + 50) {
			enemy_->IsCollision();
		}
	}
}
