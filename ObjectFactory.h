#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H
#include "Library.h"

class Object;
class ObjectFactory {
public:

	std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>>& objects) { return std::make_unique<Object>(); }

private:

};



#endif // !OBJECTFACTORY_H