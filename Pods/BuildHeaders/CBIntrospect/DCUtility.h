//
//  DCUtility.h
//  DCIntrospectDemo
//
//  Created by Christopher Bess on 4/30/12.
//  Copyright (c) 2012 Christopher Bess. All rights reserved.
//

#import <Foundation/Foundation.h>

// Returns the NSString representation of the specified BOOL value
static inline NSString * NSStringFromBOOL(BOOL value)
{
    return value ? @"YES" : @"NO";
}

@interface DCUtility : NSObject
+ (DCUtility *)sharedInstance;

/**
 * Returns the Libary/Caches directory path
 */
- (NSString *)cacheDirectoryPath;

- (NSString *)currentViewJSONFilePath;
- (NSString *)viewTreeJSONFilePath;
- (NSString *)viewMessageJSONFilePath;
- (NSString *)filePathForSelectedViewJSON;

- (BOOL)writeString:(NSString *)string toPath:(NSString *)path;

- (NSString *)describeColor:(UIColor *)color;

- (NSString *)IPAddressString;

- (void)showMessageWithString:(NSString *)string;

@end
