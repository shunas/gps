cmake_minimum_required( VERSION 2.6 )
project( gps )
set( CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra" )

# main program
add_executable( gps.out
    src/Chemin.cpp
    src/Route.cpp
    src/gps.cpp )
install (TARGETS gps.out DESTINATION bin)

# unit tests
find_package( PkgConfig REQUIRED )
pkg_check_modules( MYPKG REQUIRED libglog cpputest)
include_directories( ${MYPKG_INCLUDE_DIRS} )
add_executable( tests.out
    src/Chemin.cpp
    src/Chemin_test.cpp
    src/Route.cpp
    src/Route_test.cpp
    src/tests.cpp )
target_link_libraries(tests.out ${MYPKG_LIBRARIES} )

# doxygen documentation
find_package(Doxygen)
if(DOXYGEN_FOUND)
    configure_file(Doxyfile.in ${CMAKE_BINARY_DIR}/Doxyfile)
    add_custom_target(doc
        ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
    install(DIRECTORY ${CMAKE_BINARY_DIR}/doc/html
        DESTINATION share/doc/${CMAKE_PROJECT_NAME})
endif()

