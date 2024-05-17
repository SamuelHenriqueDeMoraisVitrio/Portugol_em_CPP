COMP = clang++
NOME = EXE
START = echo "" && echo "Compilação concluida. Iniciando..." && echo "" && echo "" && ./$(NOME) && echo ""

nome: clear
	$(COMP) -o $(NOME) main/main.cpp
	@$(START)
	@echo ""

compile: clear
	$(COMP) -o $(NOME) main/main.cpp

clear:
	@rm -rf EXE .*.cpp.swp .*.hpp.swp .cache
	clear
	@echo ""
	@ls -alh --color=auto
	@echo ""

run:
	@$(START)
	@echo ""
