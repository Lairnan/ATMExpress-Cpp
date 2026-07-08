set(SERVER_VERSION 0.0.1)
add_executable(bankcore_server
        src/main.cpp
)
target_link_libraries(bankcore_server PRIVATE bankcore_core)
target_compile_definitions(bankcore_server PRIVATE SERVER_VERSION="${SERVER_VERSION}")