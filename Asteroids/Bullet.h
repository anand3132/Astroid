#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED

#include "GameEntity.h"

class Bullet : public GameEntity
{
public:
	Bullet(XMVECTOR position,
		XMVECTOR direction);

	void Update(System *system);
	void Render(Graphics *graphics) const;
	inline bool IsExpired() const { return expired_; }

private:

	XMFLOAT3 velocity_;
	unsigned long bulletSpawnTime_;
	bool expired_;
};

#endif // BULLET_H_INCLUDED
