//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBarInsertLayoutData : NSObject
{
    struct {
        unsigned int collapsible:1;
        unsigned int prefersExpanded:1;
        unsigned int ignoredForCollapsingBehaviors:1;
        unsigned int active:1;
        unsigned int verticalOriginValid:1;
    } _flags;	// 8 = 0x8
    double _verticalOrigin;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    double _minimumHeight;	// 32 = 0x20
    double _preferredHeight;	// 40 = 0x28
    double _bottomInsetForTransitionProgress;	// 48 = 0x30
    double _assignedHeight;	// 56 = 0x38
    double _collapsingHeight;	// 64 = 0x40
    long long _priority;	// 72 = 0x48
    long long _order;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000003b952a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b83a1
- (id)description;	// IMP=0x00000000003b81d2
- (id)init;	// IMP=0x00000000003b8181

@end

