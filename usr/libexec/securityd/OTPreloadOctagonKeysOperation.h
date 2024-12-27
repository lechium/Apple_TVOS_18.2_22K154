//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTPreloadOctagonKeysOperation
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSOperation *_finishOp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001e0002
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x00100000001df9a9
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x00100000001df8df

@end

