//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientStatusControlOperation : NSObject
{
    long long _operation;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006c3077
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006c2f2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006c2edd
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006c2ec3
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006c2d71
- (id)initWithOperation:(long long)arg1;	// IMP=0x00000000006c2d34
- (id)init;	// IMP=0x00000000006c2cf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

