//
// Return.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation

/** Model for testing reserved words */
public struct Return: Codable, Hashable {

    public var &#x60;return&#x60;: Int?

    public init(&#x60;return&#x60;: Int? = nil) {
        self.&#x60;return&#x60; = &#x60;return&#x60;
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case &#x60;return&#x60; = "return"
    }

}
