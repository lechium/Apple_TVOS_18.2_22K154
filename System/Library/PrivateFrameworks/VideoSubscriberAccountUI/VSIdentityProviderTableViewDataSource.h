//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSDictionary, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_identityProviders;	// 16 = 0x10
    unsigned long long _additionalProvidersMode;	// 24 = 0x18
    NSString *_requestedStorefrontCountryCode;	// 32 = 0x20
    NSArray *_tvProviderSupportedStorefronts;	// 40 = 0x28
    NSArray *_providerSections;	// 48 = 0x30
    NSArray *_storefrontSections;	// 56 = 0x38
    NSDictionary *_destinationsBySectionIndexTitle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007392b
@property(copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle; // @synthesize destinationsBySectionIndexTitle=_destinationsBySectionIndexTitle;
@property(copy, nonatomic) NSArray *storefrontSections; // @synthesize storefrontSections=_storefrontSections;
@property(copy, nonatomic) NSArray *providerSections; // @synthesize providerSections=_providerSections;
@property(copy, nonatomic) NSArray *tvProviderSupportedStorefronts; // @synthesize tvProviderSupportedStorefronts=_tvProviderSupportedStorefronts;
@property(nonatomic) NSString *requestedStorefrontCountryCode; // @synthesize requestedStorefrontCountryCode=_requestedStorefrontCountryCode;
@property(nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007356f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000073400
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000073331
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000000000732a9
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000730e7
@property(readonly, nonatomic) long long cellAccessoryType;
- (void)setNumberOfLinesForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000007309d
- (void)_scrollToTableHeaderView;	// IMP=0x0000000000072fbd
- (id)_textColorForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000072ee8
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000072e66
- (id)_titleForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000072d98
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000072d90
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000072d4d
- (id)_additionalProvidersRowTitle;	// IMP=0x0000000000072c5c
- (_Bool)hasStorefrontOrIdentityProviderAtIndexPath:(id)arg1;	// IMP=0x0000000000072be9
- (id)storefrontAtIndexPath:(id)arg1;	// IMP=0x0000000000072b01
- (id)preferredIndexPathForIdentityProviderWithName:(id)arg1;	// IMP=0x000000000007276a
- (id)identityProviderForRowAtIndexPath:(id)arg1;	// IMP=0x000000000007264e
- (unsigned long long)_minimumProviderCountForIndexes;	// IMP=0x00000000000724d8
- (id)init;	// IMP=0x000000000007168c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

