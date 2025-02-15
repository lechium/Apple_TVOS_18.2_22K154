//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterControlOperationStatus : NSObject
{
    long long _status;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006c3486
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006c335a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006c3309
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006c32ef
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006c319d
- (id)initWithStatus:(long long)arg1;	// IMP=0x00000000006c3160
- (id)init;	// IMP=0x00000000006c3124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

