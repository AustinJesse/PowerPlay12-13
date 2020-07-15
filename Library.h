#ifndef LIBRARY_H
#define LIBRARY_H

#include<string>
#include<map>
#include<memory>
#include<vector>
using namespace std;
#include "Object.h"
#include "Monster.h"
#include "Player.h"
#include "MonsterFactory.h"
#include "ObjectFactory.h"
#include "PlayerFactory.h"
class MonsterFactory;
class PlayerFactory;
class ObjectFactory;
class Library : public ObjectFactory {

public:

	Library() {


		inventory["Monster"] = std::make_unique<MonsterFactory>();
		inventory["Player"] = std::make_unique<PlayerFactory>();
		inventory["Object"] = std::make_unique<ObjectFactory>();

	}
	virtual std::unique_ptr<Object*> create() = 0;

	std::map<std::string, std::unique_ptr<ObjectFactory>> inventory;
};

#endif // !LIBRARY_H 

