#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);

public:
	FragTrap(std::string _name);
	FragTrap(const FragTrap &_ft);
	FragTrap	&operator=(const FragTrap &_ft);
	~FragTrap(void);

	void	highFiveGuys(void);
};

#endif
