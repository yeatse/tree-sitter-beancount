// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBeancount",
    products: [
        .library(name: "TreeSitterBeancount", targets: ["TreeSitterBeancount"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterBeancount",
                path: ".",
                sources: [
                    "src/parser.c",
                ],
                resources: [
                    .copy("queries/highlights.scm"),
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
