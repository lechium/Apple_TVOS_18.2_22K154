//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol OctagonStateString;

@interface OctagonStateTransitionGroupOperation
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
}

+ (id)named:(id)arg1 intending:(id)arg2 errorState:(id)arg3 withBlockTakingSelf:(CDUnknownBlockType)arg4;	// IMP=0x00200000001b9705
- (void).cxx_destruct;	// IMP=0x00200000001b96d4
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (id)description;	// IMP=0x00100000001b95da
- (id)initIntending:(id)arg1 errorState:(id)arg2;	// IMP=0x00100000001b9538

@end

