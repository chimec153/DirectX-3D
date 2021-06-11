#pragma once
#include "SceneComponent.h"

class CStaticMeshComponent :
	public CSceneComponent
{
	friend class CGameObject;

public:
	CStaticMeshComponent();
	CStaticMeshComponent(const CStaticMeshComponent& com);
	virtual ~CStaticMeshComponent();

public:
	virtual bool Init();
	virtual void Start();
	virtual void Update(float fTime);
	virtual void PostUpdate(float fTime);
	virtual void Collision(float fTime);
	virtual void PreRender(float fTime);
	virtual void Render(float fTime);
	virtual void PostRender(float fTime);
	virtual std::shared_ptr<CComponent> Clone();

public:
	virtual void Save(FILE* pFile);
	virtual void Load(FILE* pFile);
};