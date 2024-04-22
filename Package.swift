// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MASDownloadMetadata",
    products: [
        .executable(name: "masdownloadmetadata", targets: ["MASDownloadMetadataBin"]),
        .library(name: "MASDownloadMetadata", type: .dynamic, targets: ["MASDownloadMetadataLib"]),
    ],
    dependencies: [
        .package(url: "https://github.com/apple/swift-argument-parser.git", from: "1.2.0"),
    ],
    targets: [
        .executableTarget(
            name: "MASDownloadMetadataBin",
            dependencies: [
                .product(name: "ArgumentParser", package: "swift-argument-parser"),
                .target(name: "MASDownloadMetadataLib"),
            ]
        ),
        .target(
            name: "MASDownloadMetadataLib",
            dependencies: [
                .target(name: "CommerceKit"),
                .target(name: "StoreFoundation"),
            ]
        ),
        .binaryTarget(
            name: "CommerceKit",
            path: "CommerceKit.xcframework"
        ),
        .binaryTarget(
            name: "StoreFoundation",
            path: "StoreFoundation.xcframework"
        )
    ]
)
