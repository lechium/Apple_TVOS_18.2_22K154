//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIAction;
@protocol AVUnifiedPlayerCustomOverlayMenuDelegate;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerCustomOverlayMenuProvider : NSObject
{
    id <AVUnifiedPlayerCustomOverlayMenuDelegate> _delegate;	// 8 = 0x8
    UIAction *_customOverlayAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000131481
@property(nonatomic) __weak id <AVUnifiedPlayerCustomOverlayMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performCustomOverlayAction;	// IMP=0x00000000001313ca
@property(readonly, nonatomic) UIAction *customOverlayAction; // @synthesize customOverlayAction=_customOverlayAction;
- (void)prepareForDisplay;	// IMP=0x00000000001311fe
@property(readonly, nonatomic) NSArray *menuElements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

