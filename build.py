

import Build.CToolKit as ct 

STARTER  = f'src/one.cpp'
SAIDA = "PortugolCPP.hpp"
ct.generate_amalgamated_code(STARTER,SAIDA)

