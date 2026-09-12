cmake_minimum_required(VERSION 3.20)
project(CP_Workspace)

# Ajusta el estándar según tu entorno (C++17 o C++20)
set(CMAKE_CXX_STANDARD 17)

# Escanea recursivamente todos los archivos .cpp en tus carpetas (CSES, DP, etc.)
file(GLOB_RECURSE CPP_FILES "*.cpp")

# Genera un target (ejecutable) independiente para cada problema
foreach(CPP_FILE ${CPP_FILES})
    get_filename_component(FILE_NAME ${CPP_FILE} NAME_WE)
    add_executable(${FILE_NAME} ${CPP_FILE}
            Daily_3/bs.cpp
            CSES/DP/LIS.cpp
            CSES/DP/LCS.cpp
            CSES/DP/ReectangleCut.cpp
            CSES/DP/CoinSums.cpp
            CSES/DP/RemovalGame.cpp
            daily_4/BalancedBaloon.cpp
            CSES/Trees/Subordinates.cpp
            CSES/Trees/TreeMatching.cpp
            CSES/Trees/Diameter.cpp
            CSES/Trees/Party.cpp
            CSES/Trees/Party_Implicito.cpp
            CSES/Trees/Party_Temp.cpp
            daily_4/Reptide.cpp
            daily_4/Evanescent.cpp
            Contests/Neerc/2526/B.cpp
            Contests/Neerc/2526/C.cpp
            Contests/rpc8/Itinerary.cpp
    )
endforeach()