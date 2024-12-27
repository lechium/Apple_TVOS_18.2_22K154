//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollInfo : NSObject
{
    _Bool _isUserScroll;	// 8 = 0x8
    DOMNode *_node;	// 16 = 0x10
    struct CGPoint _offset;	// 24 = 0x18
}

@property(nonatomic) _Bool isUserScroll; // @synthesize isUserScroll=_isUserScroll;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (_Bool)coalesceScrollForNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(_Bool)arg3;	// IMP=0x000000000172e0bb
- (void)dealloc;	// IMP=0x000000000172e080
- (id)initWithNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(_Bool)arg3;	// IMP=0x000000000172e006

@end

