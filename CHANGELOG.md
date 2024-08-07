# Changelog

## [3.4.0](https://github.com/cathaysia/tree-sitter-idl/compare/v3.3.0...v3.4.0) (2024-08-07)


### Features

* **directive:** move directive to define ([2ba450b](https://github.com/cathaysia/tree-sitter-idl/commit/2ba450b667079b63d2e858ac2ca039edec3d97d6))

## [3.3.0](https://github.com/cathaysia/tree-sitter-idl/compare/v3.2.0...v3.3.0) (2024-08-06)


### Features

* **bitmask:** allow comma after bitvalue ([da3daae](https://github.com/cathaysia/tree-sitter-idl/commit/da3daae7b94ea156de62897500e9acd226580822))

## [3.2.0](https://github.com/cathaysia/tree-sitter-idl/compare/v3.1.2...v3.2.0) (2024-08-05)


### Features

* **idl:** allow comma at last of enumator ([2686f50](https://github.com/cathaysia/tree-sitter-idl/commit/2686f50604399cadd679dd649f908d2a67240ebe))

## [3.1.2](https://github.com/cathaysia/tree-sitter-idl/compare/v3.1.1...v3.1.2) (2024-07-26)


### Bug Fixes

* **annotation:** using positive_int_const for no_serialize ([61f48c8](https://github.com/cathaysia/tree-sitter-idl/commit/61f48c82af341baaca78929e150e1cc0f68d24c6))

## [3.1.1](https://github.com/cathaysia/tree-sitter-idl/compare/v3.1.0...v3.1.1) (2024-07-26)


### Bug Fixes

* **anno:** using const_expor for default ([b4a3f27](https://github.com/cathaysia/tree-sitter-idl/commit/b4a3f27359e226c6a38b1d6e6e86251cd5c3c3fd))

## [3.1.0](https://github.com/cathaysia/tree-sitter-idl/compare/v3.0.0...v3.1.0) (2024-07-26)


### Features

* **annotation:** fix topic parse, using positive_const_int/cosnt_expr but not literal ([81cdda6](https://github.com/cathaysia/tree-sitter-idl/commit/81cdda6a83a43c81de39d912a2c0ea5f7635f897))

## [3.0.0](https://github.com/cathaysia/tree-sitter-idl/compare/v2.6.1...v3.0.0) (2024-07-22)


### ⚠ BREAKING CHANGES

* **annotation:** queries has been updated.

### Features

* **annotation:** make builtin anno case insensive, impl XTYPES 7.3.1.2.1 Built-in Annotations ([57165a0](https://github.com/cathaysia/tree-sitter-idl/commit/57165a0705fc82fca2fc00535f65699472a9c746))
* **union:** remove enum_anno ([57165a0](https://github.com/cathaysia/tree-sitter-idl/commit/57165a0705fc82fca2fc00535f65699472a9c746))


### Bug Fixes

* **query:** fix queries ([57165a0](https://github.com/cathaysia/tree-sitter-idl/commit/57165a0705fc82fca2fc00535f65699472a9c746))

## [2.6.1](https://github.com/cathaysia/tree-sitter-idl/compare/v2.6.0...v2.6.1) (2024-07-22)


### Bug Fixes

* **annotation:** fix custom body parse ([fc34fb1](https://github.com/cathaysia/tree-sitter-idl/commit/fc34fb10dbf026a7d51d93a657f94d25c56bc96f))

## [2.6.0](https://github.com/cathaysia/tree-sitter-idl/compare/v2.5.0...v2.6.0) (2024-07-19)


### Features

* **literal:** inner string inside wstring ([bfdf61d](https://github.com/cathaysia/tree-sitter-idl/commit/bfdf61ddc9ffac3aca8982a19ab27ceb945d0b81))

## [2.5.0](https://github.com/cathaysia/tree-sitter-idl/compare/v2.4.0...v2.5.0) (2024-07-19)


### Features

* **literal:** inline char inside wchar ([449ec6b](https://github.com/cathaysia/tree-sitter-idl/commit/449ec6bda3ce8dda7c9c5dd30474f458b734db23))

## [2.4.0](https://github.com/cathaysia/tree-sitter-idl/compare/v2.3.0...v2.4.0) (2024-07-19)


### Features

* split wchar and wstring ([0fb8d02](https://github.com/cathaysia/tree-sitter-idl/commit/0fb8d02bd31bc5fcc29f463ed0db920bcedba382))
* **union:** allow octet appears in switch_type_spec ([0896d6b](https://github.com/cathaysia/tree-sitter-idl/commit/0896d6bc705f5e9a18f3b393cb4fc49fbead706f))

## [2.3.0](https://github.com/cathaysia/tree-sitter-idl/compare/v2.2.1...v2.3.0) (2024-07-16)


### Features

* **idl:** allow more type with anno ([4e00069](https://github.com/cathaysia/tree-sitter-idl/commit/4e00069f1b192d44ffb645839c48b127d55f85c3))

## [2.2.1](https://github.com/cathaysia/tree-sitter-idl/compare/v2.2.0...v2.2.1) (2024-07-16)


### Bug Fixes

* **anno:** fix union member anno ([4b01afb](https://github.com/cathaysia/tree-sitter-idl/commit/4b01afb68f508fe81e0fb4050b533e53b8aa7463))

## [2.2.0](https://github.com/cathaysia/tree-sitter-idl/compare/v2.1.0...v2.2.0) (2024-07-16)


### Features

* **struct:** allow anno_ext appears behind member ([2c6abed](https://github.com/cathaysia/tree-sitter-idl/commit/2c6abedc335989f070a5b00fc8837530d0aa30bd))

## [2.1.0](https://github.com/cathaysia/tree-sitter-idl/compare/v2.0.1...v2.1.0) (2024-07-11)


### Features

* **queries:** update highlights ([a9e41e7](https://github.com/cathaysia/tree-sitter-idl/commit/a9e41e7b2df6b28ec1b652edaf731cd2b47ac286))

## [2.0.1](https://github.com/cathaysia/tree-sitter-idl/compare/v2.0.0...v2.0.1) (2024-07-11)


### Bug Fixes

* **literal:** fix bin_number parse ([c072507](https://github.com/cathaysia/tree-sitter-idl/commit/c072507550334abf2992d97998fee7a2688a946c))
