/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:34:36 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/13 16:34:40 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        void	set_contact(void);
		void	search_contact(void) const;
};
#endif