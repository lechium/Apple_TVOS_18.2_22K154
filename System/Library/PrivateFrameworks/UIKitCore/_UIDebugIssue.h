//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _UIDebugIssueReport;

__attribute__((visibility("hidden")))
@interface _UIDebugIssue : NSObject
{
    NSString *_description;	// 8 = 0x8
    NSString *_prefix;	// 16 = 0x10
    _UIDebugIssueReport *_subissueReport;	// 24 = 0x18
}

+ (id)issueWithFormat:(id)arg1;	// IMP=0x0010000000941c12
+ (id)issueWithDescription:(id)arg1;	// IMP=0x0010000000941b43
- (void).cxx_destruct;	// IMP=0x0000000000941eb8
@property(readonly, nonatomic, getter=_subissueReport) _UIDebugIssueReport *subissueReport; // @synthesize subissueReport=_subissueReport;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
- (void)addIssue:(id)arg1;	// IMP=0x0000000000941dc3
@property(readonly, copy, nonatomic) NSArray *subissues;
- (id)init;	// IMP=0x0000000000941ad3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

