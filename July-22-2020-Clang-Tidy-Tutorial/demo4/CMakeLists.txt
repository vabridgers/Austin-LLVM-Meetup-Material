

# Arbitrarily set to my cmake version
cmake_minimum_required ( VERSION 3.10.2 )

# project name
# root source directory - ${DEMO_SOURCE_DIR)
# root binary directory - ${DEMO_BINARY_DIR)
project (DEMO)

# tell cmake to recurse into the appDemo and
# appLibrary directories
add_subdirectory (appDemo)
add_subdirectory (appLibrary)

