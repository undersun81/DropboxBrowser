///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGFileAction;
@class DBSHARINGGetFileMetadataArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetFileMetadataArg` struct.
///
/// Arguments of `getFileMetadata`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGGetFileMetadataArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The file to query.
@property (nonatomic, readonly, copy) NSString *file;

/// A list of `FileAction`s corresponding to `FilePermission`s that should
/// appear in the  response's `permissions` in `DBSHARINGSharedFileMetadata`
/// field describing the actions the  authenticated user can perform on the
/// file.
@property (nonatomic, readonly, nullable) NSArray<DBSHARINGFileAction *> *actions;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param file The file to query.
/// @param actions A list of `FileAction`s corresponding to `FilePermission`s
/// that should appear in the  response's `permissions` in
/// `DBSHARINGSharedFileMetadata` field describing the actions the
/// authenticated user can perform on the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithFile:(NSString *)file actions:(nullable NSArray<DBSHARINGFileAction *> *)actions;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param file The file to query.
///
/// @return An initialized instance.
///
- (instancetype)initWithFile:(NSString *)file;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetFileMetadataArg` struct.
///
@interface DBSHARINGGetFileMetadataArgSerializer : NSObject

///
/// Serializes `DBSHARINGGetFileMetadataArg` instances.
///
/// @param instance An instance of the `DBSHARINGGetFileMetadataArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGGetFileMetadataArg` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGGetFileMetadataArg *)instance;

///
/// Deserializes `DBSHARINGGetFileMetadataArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGGetFileMetadataArg` API object.
///
/// @return An instantiation of the `DBSHARINGGetFileMetadataArg` object.
///
+ (DBSHARINGGetFileMetadataArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END