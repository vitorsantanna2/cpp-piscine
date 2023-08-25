#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	/*int	i;
	Animal* firmino[100];

	for (i = 0; i < 50; i++)
	{
		firmino[i] = new Dog();
	}
	for (i = 50; i < 100; i++)
	{
		firmino[i] = new Cat();
	}

	for (i = 0; i < 100; i++)
	{
		delete firmino[i];
	}
	std::string value = "teste";
	int j = 0;
	Dog rubens;
	while (j < 10)
	{
		rubens.getBrain()->setIdeas(j, value);
		//std::cout << rubens->getBrain()->getIdeas(j) << std::endl;
		j++;
	}
	Dog	vasco;
	vasco = rubens;
	j = 0;
	while (j < 10)
	{
		std::cout << vasco.getBrain()->getIdeas(j) << std::endl;
		j++;
	}
	*/
	const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
}
