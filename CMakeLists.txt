cmake_minimum_required(VERSION "3.20.21032501")

project("HelloWorld")

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #$CMAKE_INSTALL_PREFIX)/bin
install(FILES "main.cpp" DESTINATION src) #$CMAKE_INSTALL_PREFIX)/src

include(CTest)

add_test("test1" "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}")

add_test("test2" "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}" "someparameter")