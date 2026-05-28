// Filesystem compatibility header for GCC 8.x (std::experimental::filesystem)
#pragma once

#if __cplusplus >= 201703L && defined(__has_include)
    #if __has_include(<filesystem>)
        #define BPFTIME_HAS_STD_FILESYSTEM 1
    #endif
#endif

#if defined(BPFTIME_HAS_STD_FILESYSTEM)
    #include <filesystem>
    namespace bpftime_fs = ::std::filesystem;
#else
    #include <experimental/filesystem>
    namespace bpftime_fs = ::std::experimental::filesystem;
#endif
