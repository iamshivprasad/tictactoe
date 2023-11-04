conan profile detect
conan install . --output-folder=./dependencies --build=missing -s build_type=Debug -s compiler.cppstd=20