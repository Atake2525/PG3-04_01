#pragma once
#include "Vector2.h"

class Enemy {
public:
	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	void IsCollision();

	Vector2 GetPositoin() { return pos_; }

	bool IsDead() const { return isDead_; }

private:
	Vector2 pos_ = {0.0f, 0.0f};

	bool isDead_ = false;
};
