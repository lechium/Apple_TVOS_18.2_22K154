//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleAccessoryIdentifier : HMFObject
{
    NSString *_productGroup;	// 8 = 0x8
    NSString *_productNumber;	// 16 = 0x10
    HMFVersion *_firmwareVersion;	// 24 = 0x18
}

+ (id)createWithProductData:(id)arg1 firmwareVersion:(id)arg2;	// IMP=0x0010000000612306
+ (id)identifierFromRecordID:(id)arg1;	// IMP=0x0010000000de29f2
- (void).cxx_destruct;	// IMP=0x00000000006122c4
@property(readonly, nonatomic) HMFVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *productNumber; // @synthesize productNumber=_productNumber;
@property(readonly, nonatomic) NSString *productGroup; // @synthesize productGroup=_productGroup;
- (id)attributeDescriptions;	// IMP=0x0000000000612113
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000612108
- (unsigned long long)hash;	// IMP=0x0000000000612026
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000611e46
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3;	// IMP=0x0000000000611d36
- (id)cloudKitRecordID;	// IMP=0x0000000000de292a
@property(readonly, nonatomic) NSString *cloudKitRecordName;
@property(readonly, nonatomic) NSString *cloudKitZoneName;

@end

