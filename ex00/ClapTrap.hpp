#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string name; 
	int			hp;
	int			ep;
	int			ad;
	ClapTrap(void);

public:
	ClapTrap(std::string _name);
	~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &_ct);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
