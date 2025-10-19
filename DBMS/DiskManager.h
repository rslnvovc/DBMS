#include <sys/stat.h>
#include <cassert>
#include <cstring>
#include <iostream>
#include <mutex>  // NOLINT
#include <string>
#include <thread>  // NOLINT
#include <filesystem>

#include "Type.hpp"
#include "SmartPointersWrapper.hpp"

namespace DBMS {
	class DiskManager {
	public:
		DiskManager() = default;

		explicit DiskManager(const_ref<std::filesystem::path> dbFile);

		void writePage(const_ref<Type> record);

		void readPage();

		void increaseSpace(size_t size);

		void shotDown();
	};
}