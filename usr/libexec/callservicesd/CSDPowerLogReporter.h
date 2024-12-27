//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol CSDReporterDataSource;

@interface CSDPowerLogReporter : NSObject
{
    CDUnknownBlockType _systemTimeProvider;	// 8 = 0x8
    CDUnknownBlockType _eventBlock;	// 16 = 0x10
    NSDictionary *_callStateContext;	// 24 = 0x18
    NSDictionary *_visibilityContext;	// 32 = 0x20
    NSMutableDictionary *_screeningCalls;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000cbecc
@property(retain, nonatomic) NSMutableDictionary *screeningCalls; // @synthesize screeningCalls=_screeningCalls;
@property(retain, nonatomic) NSDictionary *visibilityContext; // @synthesize visibilityContext=_visibilityContext;
@property(retain, nonatomic) NSDictionary *callStateContext; // @synthesize callStateContext=_callStateContext;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(copy, nonatomic) CDUnknownBlockType systemTimeProvider; // @synthesize systemTimeProvider=_systemTimeProvider;
- (id)_bundleIdentifierForCall:(id)arg1;	// IMP=0x00100000000cbd2d
- (id)_contextDictionaryWithCall:(id)arg1;	// IMP=0x00100000000cbad7
- (void)_reportScreeningDurationEventForCall:(id)arg1;	// IMP=0x00100000000cb8e6
- (void)_reportScreeningEnabledEvent:(_Bool)arg1;	// IMP=0x00100000000cb835
- (void)_stopScreeningEventIfNecessaryForCall:(id)arg1;	// IMP=0x00100000000cb720
- (void)_reportScreeningEventForCall:(id)arg1;	// IMP=0x00100000000cb633
- (void)_registerCallBackgroundedEvent;	// IMP=0x00100000000cb5cf
- (void)_registerCallForegroundedEventForCall:(id)arg1;	// IMP=0x00100000000cb549
- (void)_registerCallStopEvent;	// IMP=0x00100000000cb4e5
- (void)_registerCallStartEventForCall:(id)arg1;	// IMP=0x00100000000cb45f
- (void)_registerEventWithContext:(id)arg1 status:(id)arg2;	// IMP=0x00100000000cb36b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000cb30e
- (void)reportingController:(id)arg1 didEndSession:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x00100000000cb15f
- (void)allCallsBackgroundedForReportingController:(id)arg1;	// IMP=0x00100000000cb116
- (void)reportingController:(id)arg1 callEnteredForeground:(id)arg2;	// IMP=0x00100000000cb09e
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x00100000000cafae
- (void)reportingController:(id)arg1 screeningChangedForCall:(id)arg2;	// IMP=0x00100000000caf99
- (void)dealloc;	// IMP=0x00100000000caf13
- (id)init;	// IMP=0x00100000000cae23

// Remaining properties
@property(nonatomic) __weak id <CSDReporterDataSource> dataSource;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<CSDReporterDataSource>",?,W,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

