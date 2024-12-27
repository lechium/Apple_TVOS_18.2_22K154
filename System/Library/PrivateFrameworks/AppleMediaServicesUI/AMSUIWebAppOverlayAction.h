//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebAppOverlayAction
{
    _Bool _dismiss;	// 8 = 0x8
    NSString *_appIdentifier;	// 16 = 0x10
    NSString *_campaignToken;	// 24 = 0x18
    NSString *_providerToken;	// 32 = 0x20
    NSString *_customProductPageIdentifier;	// 40 = 0x28
    NSString *_latestReleaseID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006a8c4
@property(retain, nonatomic) NSString *latestReleaseID; // @synthesize latestReleaseID=_latestReleaseID;
@property(retain, nonatomic) NSString *customProductPageIdentifier; // @synthesize customProductPageIdentifier=_customProductPageIdentifier;
@property(retain, nonatomic) NSString *providerToken; // @synthesize providerToken=_providerToken;
@property(retain, nonatomic) NSString *campaignToken; // @synthesize campaignToken=_campaignToken;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) _Bool dismiss; // @synthesize dismiss=_dismiss;
- (id)runAction;	// IMP=0x000000000006a671
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000006a34e

@end

