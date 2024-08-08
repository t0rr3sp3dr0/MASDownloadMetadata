//
//  Command.swift
//
//
//  Created by Pedro Tôrres on 2024-04-12.
//

import Foundation

import ArgumentParser

import MASDownloadMetadataLib

@main
struct Command: ParsableCommand {
    static var configuration = CommandConfiguration(commandName: "masdownloadmetadata")

    @Option(name: .shortAndLong, help: "The item identifier of the application.")
    var salableAdamId: Int

    @Option(name: .shortAndLong, help: "The software version external identifier of the application.")
    var appExtVrsId: Int = 0

    @Flag(name: .shortAndLong, help: "Start the application download.")
    var startDownload: Bool = false

    mutating func run() throws {
        var components = URLComponents()
        components.queryItems = [
            URLQueryItem(name: "appExtVrsId", value: String(appExtVrsId)),
            URLQueryItem(name: "price", value: "0"),
            URLQueryItem(name: "pricingParameters", value: "STDRDL"),
            URLQueryItem(name: "productType", value: "C"),
            URLQueryItem(name: "salableAdamId", value: String(salableAdamId)),
        ]

        guard
            let buyParameters = components.query,
            let downloadMetadata = MASDownloadMetadata.performPurchase(withBuyParameters: buyParameters, startDownload: startDownload),
            let data = try? PropertyListSerialization.data(fromPropertyList: downloadMetadata, format: .xml, options: .zero),
            let string = String(data: data, encoding: .utf8)
        else {
            throw ExitCode(-1)
        }

        print(string, separator: "", terminator: "")
    }
}
