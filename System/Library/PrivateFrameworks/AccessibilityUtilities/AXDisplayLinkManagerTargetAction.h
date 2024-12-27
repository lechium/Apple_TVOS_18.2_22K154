//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AXDisplayLinkManagerTargetAction : NSObject
{
    id _target;	// 8 = 0x8
    SEL _actionSelector;	// 16 = 0x10
    unsigned long long _displayDidRefreshCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000091a9
@property(nonatomic) unsigned long long displayDidRefreshCount; // @synthesize displayDidRefreshCount=_displayDidRefreshCount;
@property(nonatomic) SEL actionSelector; // @synthesize actionSelector=_actionSelector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void)displayDidRefresh:(id)arg1;	// IMP=0x0000000000009048
- (unsigned long long)hash;	// IMP=0x0000000000008fc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008ec6
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;	// IMP=0x0000000000008e3f

@end

