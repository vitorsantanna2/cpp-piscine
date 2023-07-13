#ifndef PhoneBook_hpp
# define PhoneBook_hpp

# include "Contact.hpp"

class PhoneBook
{
	private:
		int		_index;
		Contact		_contact[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
};
#endif
