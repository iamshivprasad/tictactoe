conan profile detect
conan install . --output-folder=./dependencies --build=missing -s build_type=Debug -s -s compiler.cppstd=c++20