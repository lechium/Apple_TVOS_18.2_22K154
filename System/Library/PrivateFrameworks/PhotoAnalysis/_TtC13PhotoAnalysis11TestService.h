//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13PhotoAnalysis11TestService : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *worker;	// 112 = 0x70
    MISSING_TYPE *associatedWorkers;	// 120 = 0x78
    MISSING_TYPE *identifier;	// 128 = 0x80
    MISSING_TYPE *stateHolder;	// 144 = 0x90
    MISSING_TYPE *operationManager;	// 152 = 0x98
}

- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000083a70
- (void)performLongOperationWithOperationID:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;	// IMP=0x00000000000837a0
- (void)performGetStringWithOperationID:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;	// IMP=0x0000000000083290

@end

