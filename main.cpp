#include <Novice.h>
#include "GameManeger.h"

const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManeger* gameManeger_ = nullptr;
	gameManeger_ = new GameManeger();

	gameManeger_->Run();

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
