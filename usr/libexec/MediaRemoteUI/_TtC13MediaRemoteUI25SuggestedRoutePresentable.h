//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13MediaRemoteUI25SuggestedRoutePresentable : NSObject
{
    MISSING_TYPE *requesterIdentifier;	// 8 = 0x8
    MISSING_TYPE *requestIdentifier;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000000093b0
- (id)init;	// IMP=0x0010000000009330
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;	// IMP=0x0010000000009320
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;	// IMP=0x0010000000009310
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000009230
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000000091c0
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000000091b0
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x00100000000090f0
- (void)presentableWillAppearAsBanner:(id)arg1;	// IMP=0x00100000000090e0
- (_Bool)isDraggingInteractionEnabled;	// IMP=0x00100000000090d0
- (_Bool)isDraggingDismissalEnabled;	// IMP=0x00100000000090c0
@property(nonatomic, readonly) NSString *requestIdentifier;
@property(nonatomic, readonly) NSString *requesterIdentifier;

// Remaining properties
@property(nonatomic, readonly) _Bool draggingDismissalEnabled;
@property(nonatomic, readonly) _Bool draggingInteractionEnabled;

@end

