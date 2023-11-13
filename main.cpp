#include "SceneManager.h"

int IScene::sceneNum;

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	SceneManager* sceneManager = new SceneManager();
	sceneManager->Run();

	return 0;
}
