//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UIUndoTextOperation : NSObject
{
    UITextInputController *_inputController;	// 8 = 0x8
    struct _NSRange _affectedRange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000014958f2
@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;
- (_Bool)supportsCoalescing;	// IMP=0x00000000014958a7
- (void)undoRedo;	// IMP=0x00000000014958a1
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;	// IMP=0x0000000001495814

@end

