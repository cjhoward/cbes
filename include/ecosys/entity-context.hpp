/*
 * Copyright (C) 2015  Christopher J. Howard
 *
 * This file is part of Ecosys.
 *
 * Ecosys is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Ecosys is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Ecosys.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ECS_ENTITY_CONTEXT_HPP
#define ECS_ENTITY_CONTEXT_HPP

#include <ecosys/entity-id.hpp>
#include <utility>

namespace ecs
{

class EntityManager;

/**
 * Entity context type.
 */
typedef std::pair<EntityManager*, EntityID> EntityContext;

} // namespace ecs

#endif // ECS_ENTITY_CONTEXT_HPP
