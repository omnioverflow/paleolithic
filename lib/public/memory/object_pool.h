#pragma once

#include <memory>

namespace memory 
{
	/**
	 * @brief Object pool data structure;
	 * 
	 * The pool can contain 1000+ objects, a user can specify desired number of 
	 * objects in the ctor, it can't be made less than 100 though.
	 */
	template <typename T>
	class ObjectPool
	{
	public:

		// ---------------------------------------------------------------------
		// ctors
		ObjectPool() : mCapacity(min_capacity) {}
		ObjectPool(std::size_t capacity) 
		: mCapacity(capacity > min_capacity ? capacity : min_capacity) {}

		// ---------------------------------------------------------------------
		// public interface
		size_t capacity() const { return mCapacity; }

		bool empty() const noexcept {
			// TODO: provide impl
			return true;
		}

		size_t available() const noexcept
		{
			// TODO: provide impl
			return 0;
		}

		std::shared_ptr<T> getObject() {
			// TODO: provide impl
			return nullptr;
		}
		void releaseObject(std::shared_ptr<T> object) {
			// TODO: provide impl
		}
		
	private:

		std::size_t mCapacity;

		static constexpr size_t min_capacity = 1000;
	}; // class ObjectPool
} // namespace memory