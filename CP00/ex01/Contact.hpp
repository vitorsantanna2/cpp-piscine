#ifndef Contact_hpp
# define Contact_hpp

# include <string>
class Contact
{
	private:
		std::string	_name;
		std::string	_tel;
		std::string	_phone;
		std::string	_email;
		bool		_init;
	public:
		Contact(void);
		~Contact(void);
};
#endif
