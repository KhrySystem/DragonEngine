include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

configure_package_config_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/DragonEngineConfig.cmake.in ${CMAKE_CURRENT_BINARY_DIR}/cmake/DragonEngineConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/dragon
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/cmake/DragonEngineConfig.cmake DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/dragon)