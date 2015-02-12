/*
 * Copyright (C) 2015  Christopher J. Howard
 *
 * This file is part of CBES.
 *
 * CBES is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CBES is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CBES.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMPONENT_HPP
#define COMPONENT_HPP

enum class ComponentType;

/**
 * Abstract base class for entity components.
 */
class Component
{
public:
	/**
	 * Destroys an instance of Component.
	 */
	virtual ~Component() = default;

	/**
	 * Clones the component.
	 */
	virtual Component* clone() const = 0;
	
	/**
	 * Returns the component type.
	 */
	virtual ComponentType getComponentType() const = 0;
	
protected:
	/**
	 * Creates an instance of Component.
	 */
	Component() = default;
};

#endif // COMPONENT_HPP
