import Build.CToolKit as ct

STARTER = f"src/one.cpp"
SAIDA = "intuitivLanguage.hpp"
ct.generate_amalgamated_code(STARTER, SAIDA)
