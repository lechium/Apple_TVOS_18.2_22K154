//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextPosition.h"

@class WebVisiblePosition;

__attribute__((visibility("hidden")))
@interface UITextPositionImpl : UITextPosition
{
    WebVisiblePosition *_webVisiblePosition;	// 8 = 0x8
}

+ (id)wrapWebVisiblePosition:(id)arg1;	// IMP=0x0060000000f621a4
- (void).cxx_destruct;	// IMP=0x0000000000f62665
@property(retain, nonatomic) WebVisiblePosition *webVisiblePosition; // @synthesize webVisiblePosition=_webVisiblePosition;
- (id)description;	// IMP=0x0000000000f62282
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f621f1

@end

