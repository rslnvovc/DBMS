#include <memory>

namespace DBMS {
	template<class Type>
	using ref = Type&;

	template<class Type>
	using const_ref = const Type&;

	template<class Type>
	using ptr = Type*;
	
	template<class Type>
	using uptr = std::unique_ptr<Type>;

	template<class Type>
	using sptr = std::shared_ptr<Type>;

	template<class Type>
	using wptr = std::weak_ptr<Type>;
}