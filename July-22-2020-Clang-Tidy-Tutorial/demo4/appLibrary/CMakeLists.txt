

# Create a library named appLibrary, which includes
# the source list
add_library ( appLibrary list.c buffer.c acme_zalloc.c)

# tell cmake where to find headers
target_include_directories ( appLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )

