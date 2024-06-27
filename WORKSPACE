workspace(name = "bazel-3.7.2_demo")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

git_repository(
    name = "bazel_skylib",
    remote = "git@github.com:bazelbuild/bazel-skylib.git",
    tag = "1.4.1",
)

git_repository(
    name = "platforms",
    remote = "git@github.com:bazelbuild/platforms.git",
    tag = "0.0.10",
)

git_repository(
    name = "bazel_gazelle",
    remote = "git@github.com:bazelbuild/bazel-gazelle.git",
    tag = "v0.37.0",
)

git_repository(
    name = "rules_cc",
    remote = "git@github.com:bazelbuild/rules_cc.git",
    tag = "0.0.1",
)

git_repository(
    name = "rules_foreign_cc",
    remote = "git@github.com:bazelbuild/rules_foreign_cc.git",
    tag = "0.10.1",
)

git_repository(
    name = "rules_proto",
    remote = "git@github.com:bazelbuild/rules_proto.git",
    tag = "6.0.0",
)

git_repository(
    name = "rules_perl",
    remote = "git@github.com:bazelbuild/rules_perl.git",
    tag = "0.2.3",
)

git_repository(
    name = "rules_python",
    remote = "git@github.com:bazelbuild/rules_python.git",
    tag = "0.21.0",
)

git_repository(
    name = "rules_pkg",
    remote = "git@github.com:bazelbuild/rules_pkg.git",
    tag = "1.0.0",
)

new_git_repository(
    name = "xz",
    build_file = "//bazel_script:xz.BUILD",
    commit = "0232e66d5bc5b01a25a447c657e51747626488ab",
    remote = "git@github.com:tukaani-project/xz.git",
)

new_git_repository(
    name = "zlib",
    build_file = "//bazel_script:zlib.BUILD",
    remote = "git@github.com:madler/zlib.git",
    tag = "v1.3.1",
)

new_git_repository(
    name = "bzip2",
    build_file = "//bazel_script:bzip2.BUILD",
    commit = "66c46b8c9436613fd81bc5d03f63a61933a4dcc3",
    remote = "https://gitlab.com/bzip2/bzip2.git",
)

new_git_repository(
    name = "lz4",
    build_file = "//bazel_script:lz4.BUILD",
    commit = "5b0ccb8b62eba9f0ed4b46ff3680c442c3e58188",
    remote = "git@github.com:lz4/lz4.git",
)

new_git_repository(
    name = "zstd",
    build_file = "//bazel_script:zstd.BUILD",
    remote = "git@github.com:facebook/zstd.git",
    tag = "v1.5.6",
)

git_repository(
    name = "brotli",
    remote = "git@github.com:google/brotli.git",
    tag = "v1.1.0",
)

http_archive(
    name = "openssl",
    build_file = "//bazel_script:openssl.make.BUILD",
    sha256 = "777cd596284c883375a2a7a11bf5d2786fc5413255efab20c50d6ffe6d020b7e",
    strip_prefix = "openssl-3.3.1",
    urls = ["https://github.com/openssl/openssl/releases/download/openssl-3.3.1/openssl-3.3.1.tar.gz"],
)

git_repository(
    name = "com_github_nelhage_rules_boost",
    commit = "fa33360986d63446a063dbe448128fb20311e966",
    remote = "git@github.com:nelhage/rules_boost.git",
    repo_mapping = {
        "@boringssl": "@openssl",
    },
)

load("@bazel_skylib//lib:versions.bzl", "versions")

versions.check("3.7.2")

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")
load("@rules_perl//perl:deps.bzl", "perl_register_toolchains")
load("@rules_pkg//:deps.bzl", "rules_pkg_dependencies")
load("@rules_python//python:repositories.bzl", "py_repositories")

rules_foreign_cc_dependencies()

py_repositories()

rules_pkg_dependencies()

boost_deps()

perl_register_toolchains()
