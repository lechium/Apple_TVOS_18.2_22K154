//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerTextualFeedbackAssertion : NSObject
{
    NSString *_text;	// 8 = 0x8
    CDUnknownBlockType _updateTextHandler;	// 16 = 0x10
    CDUnknownBlockType _invalidationHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000178c28
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType updateTextHandler; // @synthesize updateTextHandler=_updateTextHandler;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)invalidate;	// IMP=0x0000000000178b9c
- (void)invalidateWithDelay:(double)arg1;	// IMP=0x0000000000178af8
- (void)updateText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000178a86
- (void)dealloc;	// IMP=0x0000000000178a48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

