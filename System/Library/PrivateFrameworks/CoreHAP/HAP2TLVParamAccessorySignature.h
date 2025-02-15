//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAP2TLVParamServiceList, HAPTLVUnsignedNumberValue, NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVParamAccessorySignature : NSObject
{
    HAPTLVUnsignedNumberValue *_accessoryID;	// 8 = 0x8
    HAP2TLVParamServiceList *_serviceList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000068a86
- (void).cxx_destruct;	// IMP=0x0000000000063dad
@property(retain, nonatomic) HAP2TLVParamServiceList *serviceList; // @synthesize serviceList=_serviceList;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063abb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063a2d
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000063721
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000633eb
- (id)initWithAccessoryID:(id)arg1 serviceList:(id)arg2;	// IMP=0x0000000000063352
- (id)init;	// IMP=0x0000000000063323

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

