//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterICMPTypeList : NSObject
{
    NSMutableArray *_types;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000507d5e
+ (id)typeListFromICMPTypes:(id)arg1;	// IMP=0x0010000000493cae
- (void).cxx_destruct;	// IMP=0x0000000000507236
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000507070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000507006
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000506cfa
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005069ea
- (id)initWithTypes:(id)arg1;	// IMP=0x000000000050697f
- (id)init;	// IMP=0x0000000000506950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

