#ifndef MONSTERFACTORY_H
#define MONSTERFACTORY_H
#include "Library.h"
#include "Object.h"
#include "Monster.h"

class Monster;
class MonsterFactory {

public:

	std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>>& objects) { return std::make_unique<Monster>(objects.front()); }

private:

};



#endif // !MONSTERFACTORY_H