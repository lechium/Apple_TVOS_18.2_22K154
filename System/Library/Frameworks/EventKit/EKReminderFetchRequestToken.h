//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKReminderStore;

__attribute__((visibility("hidden")))
@interface EKReminderFetchRequestToken : NSObject
{
    EKReminderStore *_reminderStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001c23d
@property(readonly, nonatomic) __weak EKReminderStore *reminderStore; // @synthesize reminderStore=_reminderStore;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c21c
- (void)cancel;	// IMP=0x000000000001c1c3
- (id)initWithReminderStore:(id)arg1;	// IMP=0x000000000001c15f

@end

