local projectName = "FixStructurePvPDamage"

includes("deps")

rule("CXXLatest")
add_deps("ue4ss.mod", {order = true})
after_load(function(target) 
    target:set("languages", "cxxlatest")
end)
rule_end()

add_requires("safetyhook", {debug = is_mode_debug(), configs = {runtimes = get_mode_runtimes()}})

target(projectName)
    add_rules("CXXLatest")
    add_includedirs("include")
    add_headerfiles("include/**.h")
    add_files("src/**.cpp")
    add_packages("zydis", "zycore")
    add_packages("safetyhook")