//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface CLIOptionSet : NSObject
{
    NSMutableSet *_options;	// 8 = 0x8
    NSMutableDictionary *_shortAliasToOptionDict;	// 16 = 0x10
    NSMutableDictionary *_longAliasToOptionDict;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001a31a
- (id)description;	// IMP=0x001000000001a304
- (id)_copiedSet;	// IMP=0x001000000001a173
- (void)_registerOption:(id)arg1;	// IMP=0x0010000000019ef3
- (id)initWithOptions:(id)arg1;	// IMP=0x0010000000019d27
- (id)init;	// IMP=0x0010000000019c9b

@end

