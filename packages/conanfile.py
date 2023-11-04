# from conan import ConanFile

# class TicTacToeRecipe(ConanFile):
    # settings = "os", "compiler", "build_type", "arch"
    # generators = ""
    
    # def requirements(self):
        # self.requires("sfml/2.6.0")
        # self.requires("spdlog/1.12.0")
        
from conan import ConanFile
from conan.tools.microsoft import MSBuildDeps

class TicTacToeRecipe(ConanFile):
    settings = "os", "compiler", "arch", "build_type", "compiler.cppstd"
    requires = "sfml/2.6.0", "spdlog/1.12.0"

    def generate(self):
        ms = MSBuildDeps(self)
        ms.generate()