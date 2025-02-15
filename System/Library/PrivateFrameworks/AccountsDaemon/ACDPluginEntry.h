//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDPluginEntry : NSObject
{
    id _principalObject;	// 8 = 0x8
    NSSet *_supportedAccountTypes;	// 16 = 0x10
    NSSet *_supportedDataclasses;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    struct {
        unsigned int principalObject:1;
        unsigned int supportedAccountTypes:1;
        unsigned int supportedDataclasses:1;
        unsigned int identifier:1;
    } _fetchedFlags;	// 40 = 0x28
    NSBundle *_bundle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000074917
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)debugDescription;	// IMP=0x00000000000747ec
- (id)description;	// IMP=0x0000000000074749
- (_Bool)principalObjectRespondsToSelector:(SEL)arg1;	// IMP=0x0000000000074714
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id principalObject;
@property(readonly, nonatomic) NSSet *supportedDataclasses;
@property(readonly, nonatomic) NSSet *supportedAccountTypes;
- (id)initWithBundle:(id)arg1;	// IMP=0x00000000000742fc
- (id)init;	// IMP=0x00000000000742d1

@end

