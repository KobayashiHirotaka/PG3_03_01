#pragma once
#define DIRECTINPUT_VERSION 0x0800//DirectInputのバージョン指定
#include <dinput.h>
#pragma comment(lib,"dinput8.lib")
#pragma comment(lib,"dxguid.lib")
#include <array>
#include <wrl.h>
#include "WinApp.h"

class InputManager
{
public:
	static InputManager* GetInstance();
	void Update();
	//押した時
	bool PushKey(uint8_t keyNumber)const;


private:
	static InputManager* inputManager_;

	Microsoft::WRL::ComPtr<IDirectInput8>directInput_ = nullptr;
	Microsoft::WRL::ComPtr<IDirectInputDevice8> keyboard_ = nullptr;

	std::array<BYTE, 256> keys_;
	std::array<BYTE, 256> preKeys_;
};

