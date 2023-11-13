#include "SceneManager.h"

const char kWindowTitle[] = "LE2A_10_コバヤシヒロタカ_タイトル";

void SceneManager::Run()
{
	Initialize();
	Update();
	Release();
}

void SceneManager::Initialize()
{
	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	inputManager_ = InputManager::GetInstance();

	state[TITLE] = std::make_unique<GameTitleScene>();
	state[PLAY] = std::make_unique<GameStageScene>();
	state[CLEAR] = std::make_unique<GameClearScene>();
	state[TITLE]->Initialize();

	currentSceneNum_ = TITLE;
}

void SceneManager::Update()
{
	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		///
		/// ↓更新処理ここから
		///

		inputManager_->Update();

		prevSceneNum_ = currentSceneNum_;
		currentSceneNum_ = state[currentSceneNum_]->GetSceneNum();

		if (prevSceneNum_ != currentSceneNum_)
		{
			state[currentSceneNum_]->Initialize();
		}

		state[currentSceneNum_]->Update();

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		state[currentSceneNum_]->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (inputManager_->GetKey(DIK_ESCAPE)) {
			break;
		}
	}
}

void SceneManager::Release()
{
	// ライブラリの終了
	Novice::Finalize();
}