add_executable(dgwindowtest window_test.cpp)
target_link_libraries(dgwindowtest PUBLIC Dragon::Core Dragon::Graphics)

if(Dragon_INSTALL)
    include(GNUInstallDirs)
    install(TARGETS dgwindowtest
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
endif()