//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject
{
    NSData *_token;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000006bedba
- (void).cxx_destruct;	// IMP=0x00000000006beda7
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *name;
- (id)labels;	// IMP=0x00000000006becf3
- (id)attributeDescriptions;	// IMP=0x00000000006bebd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006bebca
- (id)initWithToken:(id)arg1;	// IMP=0x00000000006beb49

@end

