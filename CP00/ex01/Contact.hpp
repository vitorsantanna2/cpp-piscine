/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:34:48 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/13 16:34:51 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
