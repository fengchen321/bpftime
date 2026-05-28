// Filesystem compatibility header for GCC 8.x (std::experimental::filesystem)
#pragma once

#if defined(__cpp_lib_filesystem) && __cpp_lib_filesystem >= 201703L
    #include <filesystem>
    namespace bpftime_fs = ::std::filesystem;
#else
    #include <experimental/filesystem>
    namespace bpftime_fs = ::std::experimental::filesystem;
#endif
