//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13SiriAnalytics15StagingPoolHost : NSObject
{
    MISSING_TYPE *stagingContainerURL;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000004d258
- (id)init;	// IMP=0x000000000004d223
- (void)dataPoolUrlWithCompletionHandler:(void (^)(NSURL *))arg1;	// IMP=0x000000000004d052
- (void)vendStagingAccessWithAuditToken:(CDStruct_6ad76789)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;	// IMP=0x000000000004ce07

@end

