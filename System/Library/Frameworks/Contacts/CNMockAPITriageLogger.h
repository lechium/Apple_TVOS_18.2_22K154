//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockAPITriageLogger : NSObject
{
}

- (void)request:(id)arg1 willReturnAnchor:(id)arg2;	// IMP=0x0000000000133aab
- (void)request:(id)arg1 spentTimeInClientCode:(double)arg2;	// IMP=0x0000000000133aa5
- (void)didReturnAllResultsForContactFetchRequest:(id)arg1;	// IMP=0x0000000000133a9f
- (void)willExecuteFetchRequest:(id)arg1;	// IMP=0x0000000000133a99
- (void)request:(id)arg1 containsContact:(id)arg2;	// IMP=0x0000000000133a93
- (void)request:(id)arg1 encounteredError:(id)arg2;	// IMP=0x0000000000133a8d
- (void)didExecuteFetchRequest:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000133a87
- (void)clientStoppedEnumerationForRequest:(id)arg1;	// IMP=0x0000000000133a81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

