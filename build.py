import Build.CToolKit as ct

print("\t\nCompilador para .hpp\n")

versao = input("\tQual versão: ")

if versao == "um":
    STARTER = f"srcum/one.cpp"
    SAIDA = "intuitivLanguage.hpp"
    ct.generate_amalgamated_code(STARTER, SAIDA)
    print("\n\tDeu certo 1\n\n")

elif versao == "dois":
    STARTER = f"srcdois/one.cpp"
    SAIDA = "intuitivLanguage2.hpp"
    ct.generate_amalgamated_code(STARTER, SAIDA)
    print("\n\tDeu certo 2\n\n")

elif versao == "tres":
    STARTER = f"srctres/one.cpp"
    SAIDA = "intuitivLanguage3.hpp"
    ct.generate_amalgamated_code(STARTER, SAIDA)
    print("\n\tDeu certo 3\n\n")

elif versao == "qua":
    STARTER = f"srcqua/one.cpp"
    SAIDA = "intuitivLanguage4.hpp"
    ct.generate_amalgamated_code(STARTER, SAIDA)
    print("\n\tDeu certo 4\n\n")

else:
    print("\n\tVersão não reconhecida.\n\n")