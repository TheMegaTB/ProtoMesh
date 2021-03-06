project(module_cryptography)

# Define the source files and dependencies for this module
set(CRYPTOGRAPHY_DEPENDENCIES schemes_cryptography)
set(CRYPTOGRAPHY_SOURCES
        ${RESULT_SOURCES}
        ${ECC_SOURCES}
        ${AES_SOURCES}
        ${PROJECT_SOURCE_DIR}/uuid.cpp
        ${PROJECT_SOURCE_DIR}/uuid.hpp
        ${PROJECT_SOURCE_DIR}/asymmetric.cpp
        ${PROJECT_SOURCE_DIR}/asymmetric.hpp
        ${PROJECT_SOURCE_DIR}/symmetric.cpp
        ${PROJECT_SOURCE_DIR}/symmetric.hpp
        ${PROJECT_SOURCE_DIR}/serialization.cpp
        ${PROJECT_SOURCE_DIR}/serialization.hpp
        ${PROJECT_SOURCE_DIR}/hash.cpp
        ${PROJECT_SOURCE_DIR}/hash.hpp
        ${PROJECT_SOURCE_DIR}/sha512.hpp)

# Add library target
add_library(${PROJECT_NAME} STATIC ${CRYPTOGRAPHY_SOURCES})
add_dependencies(${PROJECT_NAME} ${CRYPTOGRAPHY_DEPENDENCIES})

# Add test files
set(PROTOMESH_TEST_FILES
        ${PROTOMESH_TEST_FILES}
        ${CRYPTOGRAPHY_SOURCES}
        PARENT_SCOPE)

# Add the required schemes as test dependencies
set(PROTOMESH_TEST_DEPS
        ${PROTOMESH_TEST_DEPS}
        ${CRYPTOGRAPHY_DEPENDENCIES}
        PARENT_SCOPE)
