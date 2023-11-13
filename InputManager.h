#pragma once
#include <Novice.h>

class InputManager
{
public:
	static InputManager* GetInstance();
	void Update();
	bool GetKey(BYTE keyNumber);
	bool GetKeyDown(BYTE keyNumber);

private:
	InputManager() = default;
	~InputManager() = default;
	InputManager(const InputManager&) = delete;
	InputManager& operator=(const InputManager&) = delete;

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};

