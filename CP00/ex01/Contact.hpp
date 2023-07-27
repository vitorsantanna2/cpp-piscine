/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:34:48 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/20 13:15:20 by vitorsantanna    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_hpp
# define Contact_hpp

# include <string>
# include <iomanip>
class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_darkest_secret;
		int		_value;
	public:
		Contact(void);
		~Contact(void);
		int	get_value(void) const;
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone(void) const;
		std::string	get_darkest_secret(void) const;
		void	set_first_name(std::istream& in);
		void	set_last_name(std::istream& in);
		void	set_nickname(std::istream& in);
		void	set_phone(std::istream& in);
		void	set_darkest_secret(std::istream& in);
        void	set_value();
        void	printform(int i) const;
        int		printcontact(int i) const;
        void	fill_form();
};
#endif
