package("safetyhook")
    set_urls("https://github.com/cursey/safetyhook.git")

    add_deps("zydis", "zycore", "cmake")

    add_versions("v0.4.1", "629558c64009a7291ba6ed5cfb49187086a27a47")

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        import("package.tools.cmake").install(package, configs, { packagedeps = { "zycore", "zydis" } })
        os.cp("include", package:installdir())
        
    end)
package_end()