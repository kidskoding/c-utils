set_project("c-utils")
set_languages("c99", "cxx17")
add_rules("mode.debug", "mode.release")

target("c-utils")
    set_kind("binary")
    add_files("src/*.c")
    add_includedirs("include")
    add_cxflags("-Wall", "-Wextra")
