//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDBrowsableContentAPICoordinator : NSObject
{
    NSMutableDictionary *_persistenceDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000287e6
- (id)applicationsSupportingAPIs:(unsigned int)arg1;	// IMP=0x00100000000286f9
- (void)setSupportedAPIs:(unsigned int)arg1 forApplication:(id)arg2;	// IMP=0x001000000002862a
- (unsigned int)supportedAPIsForApplication:(id)arg1;	// IMP=0x00100000000285d9
- (id)init;	// IMP=0x00100000000284a2

@end

