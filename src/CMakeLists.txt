include(GenerateExportHeader)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
  PRIVATE
    main.cxx
  PRIVATE
    FILE_SET CXX_MODULES
      BASE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
      FILES
        importable.cxx
        guess_the_number.cxx
)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)