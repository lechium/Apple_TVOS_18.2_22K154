//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFStateMachine.h>

@class MISSING_TYPE;

@interface _TtC14VoiceShortcuts23DatabaseDeleteOperation : WFStateMachine
{
    MISSING_TYPE *descriptor;	// 8 = 0x8
    MISSING_TYPE *progress;	// 16 = 0x10
    MISSING_TYPE *reason;	// 24 = 0x18
    MISSING_TYPE *environment;	// 40 = 0x28
    MISSING_TYPE *subject;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000014fed
- (id)init;	// IMP=0x0000000000014fb7
- (_Bool)transitionToState:(id)arg1 withReason:(id)arg2;	// IMP=0x0000000000014ef2

@end

