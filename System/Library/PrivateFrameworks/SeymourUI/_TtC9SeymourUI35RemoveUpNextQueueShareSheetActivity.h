//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/UIActivity.h>

@class MISSING_TYPE, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI35RemoveUpNextQueueShareSheetActivity : UIActivity
{
    MISSING_TYPE *title;	// 8 = 0x8
    MISSING_TYPE *upNextQueueClient;	// 24 = 0x18
    MISSING_TYPE *workoutIdentifier;	// 64 = 0x40
}

+ (long long)activityCategory;	// IMP=0x0040000000952090
- (void).cxx_destruct;	// IMP=0x0000000000953630
- (id)init;	// IMP=0x00000000009535d0
- (void)performActivity;	// IMP=0x00000000009524c0
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000009521e0
@property(nonatomic, readonly) UIImage *activityImage;
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;

@end

