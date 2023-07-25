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
class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_darkest_secret;
		bool		_init;
	public:
		Contact(void);
		~Contact(void);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_phone(void);
		std::string	get_darkest_secret(void);
		void	set_first_name(std::istream& in);
		void	set_last_name(std::istream& in);
		void	set_nickname(std::istream& in);
		void	set_phone(std::istream& in);
		void	set_darkest_secret(std::istream& in);
        void	fill_form();
};
#endif
