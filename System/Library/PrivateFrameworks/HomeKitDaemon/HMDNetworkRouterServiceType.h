//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterServiceType : NSObject
{
    NSString *_name;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006d0782
- (void).cxx_destruct;	// IMP=0x00000000006d0772
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006d05ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006d0542
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000006d0372
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006d00b0
- (id)initWithName:(id)arg1;	// IMP=0x00000000006d0045
- (id)init;	// IMP=0x00000000006d0016

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

