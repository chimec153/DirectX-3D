#pragma once
#include "Object\GameObject.h"

class CTargetUI :
    public CGameObject
{
public:
    CTargetUI();
    CTargetUI(const CTargetUI& ui);
    virtual ~CTargetUI();

private:
    CGameObject*       m_pTarget;
    std::shared_ptr<class CComponent>   m_pBar;

public:
    void SetTarget(class CGameObject* pObj)
    {
        SetEnable(true);
        m_pTarget = pObj;
    }

public:
    virtual bool Init() override;
    virtual void Start() override;
    virtual void Update(float fTime) override;
    virtual void PostUpdate(float fTime) override;
    virtual void Collision(float fTime) override;
    virtual void PreRender(float fTime) override;
    virtual void Render(float fTime) override;
    virtual void PostRender(float fTime) override;
    virtual std::shared_ptr<CGameObject> Clone();

public:
    virtual void Save(FILE* pFile) override;
    virtual void Load(FILE* pFile) override;
};

