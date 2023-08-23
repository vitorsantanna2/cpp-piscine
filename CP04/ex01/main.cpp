#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* s = new WrongAnimal();
	const WrongAnimal* f = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << s->getType() << " says ";
	s->makeSound();
	std::cout << f->getType() << " says ";
	f->makeSound();
	delete meta;
	delete j;
	delete i;
	delete s;
	delete f;
	return (0);
}
