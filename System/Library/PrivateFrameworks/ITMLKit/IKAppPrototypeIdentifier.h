//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKAppPrototypeIdentifier : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_selector;	// 16 = 0x10
    NSDictionary *_groupingValues;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e0be5
@property(readonly, copy, nonatomic) NSDictionary *groupingValues; // @synthesize groupingValues=_groupingValues;
@property(readonly, copy, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e0935
- (unsigned long long)hash;	// IMP=0x00000000000e08f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e08e6
- (id)initWithIdentifier:(id)arg1 selector:(id)arg2 groupingValues:(id)arg3;	// IMP=0x00000000000e07fa

@end

