//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EXOSExtensionEnumerator : NSEnumerator
{
    NSArray *_extensionPaths;	// 8 = 0x8
    NSEnumerator *_extensionPathsEnumerator;	// 16 = 0x10
}

+ (void)enumerateExtensionsInDirectoryAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030720
- (void).cxx_destruct;	// IMP=0x0000000000031410
@property(readonly) NSEnumerator *extensionPathsEnumerator; // @synthesize extensionPathsEnumerator=_extensionPathsEnumerator;
@property(readonly) NSArray *extensionPaths; // @synthesize extensionPaths=_extensionPaths;
- (id)nextObject;	// IMP=0x0000000000031374
- (id)initWithCacheURLs:(id)arg1 paths:(id)arg2;	// IMP=0x0000000000030d00
- (id)initWithCacheURLs:(id)arg1;	// IMP=0x0000000000030ce7

@end

