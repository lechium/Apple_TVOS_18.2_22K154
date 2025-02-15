//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface TVUPSGroupRecommendationsConsentViewController : UIViewController
{
    CDUnknownBlockType _onConsentAuthorization;	// 8 = 0x8
    CDUnknownBlockType _onConsentDeclined;	// 16 = 0x10
    NSString *_userProfileIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003aa0
@property(retain, nonatomic) NSString *userProfileIdentifier; // @synthesize userProfileIdentifier=_userProfileIdentifier;
@property(copy, nonatomic) CDUnknownBlockType onConsentDeclined; // @synthesize onConsentDeclined=_onConsentDeclined;
@property(copy, nonatomic) CDUnknownBlockType onConsentAuthorization; // @synthesize onConsentAuthorization=_onConsentAuthorization;
- (void)groupRecommendationsConsentViewControllerDidCancel:(id)arg1;	// IMP=0x0010000000003880
- (void)groupRecommendationsConsentViewController:(id)arg1 didUpdateConsentWithAuthorized:(_Bool)arg2;	// IMP=0x0010000000003040
- (void)_dimissWithConsentGiven:(_Bool)arg1;	// IMP=0x0010000000002e60
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000002d30
- (void)viewDidLoad;	// IMP=0x0010000000002c40
- (id)initWithUserProfileIdentifier:(id)arg1;	// IMP=0x00100000000028c0

@end

