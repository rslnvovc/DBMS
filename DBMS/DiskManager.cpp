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
#include "DiskManager.h"

namespace DBMS {
	DiskManager::DiskManager(const_ref<std::filesystem::path> dbFile) {
	
	}

	void DiskManager::writePage(const_ref<Type> record) {
	
	}

	void DiskManager::readPage() {
	
	}

	void DiskManager::increaseSpace(size_t size) {
	
	}

	void DiskManager::shotDown() {
	
	}
}