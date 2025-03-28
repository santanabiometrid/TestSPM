// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "BiometridStandard",
    platforms: [
        .iOS(.v16)
    ],
    products: [
        .library(
            name: "BiometridStandard",
            targets: ["BiometridStandard"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "BiometridStandard",
            url: "https://dl.cloudsmith.io/fpYu8nBYZjIhop18/biometrid/mobile-test/raw/names/BiometridStandard/versions/1.0.1/BiometridStandard.xcframework.zip",
            checksum: "85046fb5fbe064e32159770e0fba066c78c6e522a76a1621d54f741ab1d5f7b4"
        )
    ]
)