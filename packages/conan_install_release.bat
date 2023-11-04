conan profile detect
conan install . --output-folder=./dependencies --build=missing -s build_type=Release -s compiler.cppstd=20
