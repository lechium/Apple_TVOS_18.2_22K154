//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObservationSource.h>

@class NSArray, NSLayoutRect;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface _NSLayoutRectObservable : NSObservationSource
{
    NSArray *_anchorObservations;	// 40 = 0x28
    NSLayoutRect *_rectangle;	// 48 = 0x30
    id <NSLayoutItem> _layoutItem;	// 56 = 0x38
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;	// IMP=0x0060000000006838
- (void)dealloc;	// IMP=0x0000000000006b91

@end

