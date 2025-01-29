#pragma once

#include "IScene.h"

class StageScene : public IScene {
public:
	// 継承先で実装される関数
	// 中小クラスなので純粋仮想関数とする
	void Initialize() override = 0;
	void Update() override = 0;
	void Draw() override = 0;
};
