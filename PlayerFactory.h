#ifndef PLAYERFACTORY_H
#define PLAYERFECTORY_H
#include "Library.h"
#include "Object.h"
#include "Player.h"

class Player;
class PlayerFactory {
public:

	std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>>& objects) { return std::make_unique<Player>(); }

private:

};



#endif // !PLAYERFACTORY_H