set(CONSOLE_VERSION 0.0.1)
add_executable(bankcore_console
    src/main.cpp
)
target_link_libraries(bankcore_console PRIVATE bankcore_core)
target_compile_definitions(bankcore_console PRIVATE CONSOLE_VERSION="${CONSOLE_VERSION}")