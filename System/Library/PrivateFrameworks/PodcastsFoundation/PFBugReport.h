//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface PFBugReport : NSObject
{
    MISSING_TYPE *domain;	// 0 = 0x0
    MISSING_TYPE *system;	// 8 = 0x8
    MISSING_TYPE *errorKind;	// 9 = 0x9
    MISSING_TYPE *forceSubmissionAttempt;	// 10 = 0xa
}

- (id)init;	// IMP=0x00000000001fca60
@property(nonatomic, readonly) NSString *signature;
@property(nonatomic, readonly) _Bool forceSubmissionAttempt; // @synthesize forceSubmissionAttempt;
@property(nonatomic, readonly) NSString *errorKindString;
@property(nonatomic, readonly) NSString *systemString;
@property(nonatomic, readonly) NSString *domainString;

@end

