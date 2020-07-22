
# add executable appDemo that's built from the source list
add_executable ( appDemo main.c )

# link executable to the lib appLibrary
target_link_libraries ( appDemo LINK_PUBLIC appLibrary )

