//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterAccessViolationControlResponse : NSObject
{
    NSMutableArray *_violations;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000502447
- (void).cxx_destruct;	// IMP=0x0000000000502437
@property(retain, nonatomic) NSMutableArray *violations; // @synthesize violations=_violations;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000502271
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000502207
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000501efb
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000501beb
- (id)initWithViolations:(id)arg1;	// IMP=0x0000000000501b80
- (id)init;	// IMP=0x0000000000501b51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

