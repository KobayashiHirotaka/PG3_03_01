#include "GameStageScene.h"

GameStageScene::GameStageScene()
{

}

GameStageScene::~GameStageScene()
{

}

void GameStageScene::Initialize()
{
	inputManager_ = InputManager::GetInstance();

	player_= std::make_unique<Player>();
	player_->Initialize();

	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();
}

void GameStageScene::Update()
{
	player_->Update();
	enemy_->Update();

	//当たり判定
	const std::list<std::unique_ptr<PlayerBullet>>& bullets = player_->GetBullets();

	Vector2 enemyPosition = enemy_->GetPos();
	int enemyRadius = enemy_->GetRadius();

	for (const std::unique_ptr<PlayerBullet>& bullet : bullets) 
	{
		Vector2 bulletPosition = bullet->GetPos();
		int bulletRadius = bullet->GetRadius();

		float distance = (enemyPosition.x - bulletPosition.x) * (enemyPosition.x - bulletPosition.x) + (enemyPosition.y - bulletPosition.y) * (enemyPosition.y - bulletPosition.y);
		int radius = (enemyRadius + bulletRadius) * (enemyRadius + bulletRadius);

		if (radius == distance || radius > distance)
		{
			sceneNum = 2;
			bullet->SetIsDead(true);
		}
	}

	ImGui::Begin("STAGESCENE");
	ImGui::Text("AD : Move");
	ImGui::Text("SPACE : Shot");
	ImGui::End();
}

void GameStageScene::Draw()
{
	player_->Draw();
	enemy_->Draw();
}

