# Ecosys

Ecosys is an implementation of the entity-component-system (ECS) pattern, written in C++.

## Installation

	cmake .
	make
	make install

## Usage

The following directive includes all of the public header files in Ecosys:

	#include <ecosys/ecs.hpp>

Note that all classes and types in Ecosys are contained within the `ecs` namespace.

### Entities

An entity is purely represented by an ID number.

### Components

Components are derived from the `ecs::Component` class and should contain private member data and public accessors. Virtual functions for cloning and returning the component type must also be defined.

	class FooComponent: public ecs::Component
	{
	public:
		void setBar(int value) { bar = value; }
		int getBar() const { return bar; }

		virtual ecs::Component* clone() const
		{
			FooComponent* foo = new FooComponent();
			foo->setBar(bar);
			return foo;
		}

		virtual ecs::ComponentType getComponentType() const
		{
			return ecs::ComponentType::FOO;
		}
		
	private:
		int bar;
	};

The structure `ecs::ComponentType` is an `enum class` declared by Ecosys, but not defined. It should be defined by the user and should contain an enumeration for every type of component:

	namespace ecs
	{
		enum class ComponentType
		{
			FOO,
			BAR,
			BAZ
		};
	}

### Systems

TODO

## License

Ecosys is licensed under the GNU General Public License, version 3. See [COPYING](COPYING) for details.
