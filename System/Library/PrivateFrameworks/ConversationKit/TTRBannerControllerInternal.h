//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol TTRBannerControllerDelegate;

@interface TTRBannerControllerInternal : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002cbaa0
- (void)buildTTRMessageBubbleRecipientsListWithGroupMessageUUID:(id)arg1 with:(id)arg2;	// IMP=0x00000000002cb9fa
- (void)showTTRBannerWithFullLogArchive:(_Bool)arg1;	// IMP=0x00000000002cb9f4
- (id)init;	// IMP=0x00000000002cb9dd
@property(nonatomic) __weak id <TTRBannerControllerDelegate> delegate; // @synthesize delegate;

@end

