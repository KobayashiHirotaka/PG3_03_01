#include "InputManager.h"
#include <cassert>

InputManager* InputManager::GetInstance()
{
	static InputManager instance;
	return &instance;
}

void InputManager::Update()
{
	preKeys_ = keys_;
	//キーボード情報の取得開始
	keyboard_->Acquire();
	keys_ = {};
	//全てのキーの入力状態を取得する
	keyboard_->GetDeviceState(sizeof(keys_), &keys_);
}

//bool InputManager::PushKey(uint8_t keyNumber)
//{
//	if (!keys_[keyNumber] && preKeys_[keyNumber])
//	{
//		return true;
//
//	}
//	else {
//		return false;
//	}
//}
