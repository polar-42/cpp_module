/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:29:24 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/04/18 17:52:54 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <AForm.hpp>
# include <Bureaucrat.hpp>

class PresidentialPardonForm : public virtual AForm
{
	private:
		const std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &src);
		~PresidentialPardonForm();

		const std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif