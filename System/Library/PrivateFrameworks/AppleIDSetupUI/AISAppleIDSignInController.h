//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AISAppleIDSignInConfiguration, MISSING_TYPE, UIViewController;
@protocol AISAppleIDSignInControllerDelegate;

@interface AISAppleIDSignInController : NSObject
{
    MISSING_TYPE *configuration;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_hostingViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003ea70
- (id)init;	// IMP=0x000000000003e940
- (void)presentWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e8d0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000003e860
@property(nonatomic, retain) UIViewController *hostingViewController;
@property(nonatomic) __weak id <AISAppleIDSignInControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) AISAppleIDSignInConfiguration *configuration; // @synthesize configuration;

@end

